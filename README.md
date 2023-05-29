#This is a Self-Driving Test Program
Once, the program is started, it will start to drive the car by itself.
The program contains following classes:

1. Map
2. Ride
3. Vehicle

The Project contains the following Information:
**\***Input file**\***

1. The first line contains the rows,colums and number of vehicles,rides,bonus and steps.
2. The next lines contain the information about the rides.

**\***Main Program**\***

1.Once the program is run,the Inputs are stored in the static object of Map (Fleet).
2.The rides are stored respectively in the array of Ride objects.
3.Each Vehicle will be assigned rides acording to the shortest distance between the current position of the vehicle and the start position of the ride.
4. If the Vehicle arrives at the start position of the ride before the earliest start of the ride, it will wait for the start time of the ride & a bonus will be rewarded. 
5. If the Vehicle arrives at the start position of the ride after the earliest start of the ride, it will start the ride immediately. 
6. If the Vehicle arrives at the end position of the ride before the latest finish of the ride, it will complete the ride & the number of steps will be added to the total points 7. If the Vehicle arrives at the end position of the ride after the latest finish of the ride, it will complete the ride but points will not be added to the total points.
7. If the number of steps exceeds the total number of steps, the vehicle will complete the current ride and the next rides assigned to it will be skipped.
8. The program will run until all the vehicles have taken their rides.
9. The total points will be printed on the console as score of submission
10. The output file will be generated in the same directory as the input file.


**\***Output file**\***
1. The output file will contain the number of rides taken by each vehicle.
2. The rides are printed in the same order as they are taken by the vehicles.
