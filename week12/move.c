void move(int speed, int time)
{
	motor[motorB] = speed;
	motor[motorC] = speed;
	wait1Msec(time);
}
task main()
{
	move(30, 2000);
	move(-30, 2000);
	move(30, 2000);
	move(-30, 2000);
}
