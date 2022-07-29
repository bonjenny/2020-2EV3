int computeDegree(int height, int degree)
{
	//rotate "degree" degrees

	int FV = SensorValue[gyro];
	while (SensorValue[gyro] <= degree + FV)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}
	motor[motorB] = 0;
	motor[motorC] = 0;

	//calculate "distance"

	float distance = height / cosDegrees(60);
	writeDebugStreamLine("distance = %f", distance);
	sleep(2000);

	//move motor as "motordeg"

	int motordeg = (360 * distance) / 17.58;
	moveMotorTarget(motorB, motordeg, 30);
	moveMotorTarget(motorC, motordeg, 30);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
}