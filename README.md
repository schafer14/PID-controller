# CarND-Controls-PID

This is a PID controller for a self driving car for the Udacity Self Driving Car course. 

The hyper parameters were chosen manually. First, by setting a low integral parameter based
on the assumption that the axels of the car were aligned, this assumption was pretty safe to 
make considering the car being used was simulated. With a small integral component only two 
more parameters were required to tune. I chose as large a derivative component as possible while
not overshadowing the proporital component so much that turning was not possible. This allowed
for the smoothest turns while still staying on the track. 

In addition, I tried to implement a PD controller for the throttle, but found a couple issues that
would have required more time to solve. First, the throttle controller should be a function of both
the cross track error and the current speed of the vehicle. I believe this could be done by simply
combining PD controllers from the speed and the cte by adding them together. The second issue is once
the speed is variable it is desirable to have the steering controller use the speed as an input. I 
believe the same method of combining controllers could be used to solve this problem. This would increase
the number of hyperparameters to tune and would probably require non manual hyperparameter tuning. 


[![Watch in action](http://img.youtube.com/vi/https://youtu.be/fLNwpXFY0zQ/0.jpg)](http://www.youtube.com/watch?v=https://youtu.be/fLNwpXFY0zQ)

