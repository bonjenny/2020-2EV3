void go()
{
	motor[motorB] = 30;
	motor[motorC] = 30;
	wait1Msec(2000);
}
void back()
{
	motor[motorB] = -30;
	motor[motorC] = -30;
	wait1Msec(2000);
}
task main()
{
	go();
	back();
	go();
	back();
}
