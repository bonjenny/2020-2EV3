task main() {

	moveMotorTarget(motorB, 1435, 50);
	moveMotorTarget(motorC, 1435, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
	motor[motorB] = 50;
	motor[motorC] = 0;
	sleep(750);
	moveMotorTarget(motorB, 1591, 50);
	moveMotorTarget(motorC, 1591, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
	motor[motorB] = 50;
	motor[motorC] = 0;
	sleep(750);
	moveMotorTarget(motorB, 1066, 50);
	moveMotorTarget(motorC, 1066, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
	motor[motorB] = 50;
	motor[motorC] = -50;
	sleep(750);
	moveMotorTarget(motorB, 1711, 50);
	moveMotorTarget(motorC, 1711, 50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

}