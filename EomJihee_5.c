task main()
{
	int i, speed;
	nMotorEncoder[motorB]=0;
	nMotorEncoder[motorC]=0;
	clearTimer(T1);
	for(i=0;i<5;i++) {
		motor[motorB]=100;
		motor[motorC]=100;
		wait10Msec(100);
	}
	speed=((nMotorEncoder[motorB]/360*17.58)/5);
	displayCenteredBigTextLine(3,"Forward Speed = %d cm/s", speed);

	nMotorEncoder[motorB]=0;
	nMotorEncoder[motorC]=0;
	clearTimer(T1);
	while(time100[T1]<50) {
		motor[motorB] = -100;
		motor[motorC] = -100;
	}
	speed=((nMotorEncoder[motorB]/360*17.58)/5);
	displayCenteredBigTextLine(4,"Backward Speed = %d cm/s", speed);
}
