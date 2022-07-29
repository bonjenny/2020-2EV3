//auto linetracing

#pragma config(Sensor, S1, Touch, sensorEV3_Touch)
#pragma config(Sensor, S3, Colour, sensorEV3_Color)

task main()
{
	//-------------------------------------------------
	int light_value;
	int bright;
	int dark;
	int threshold;

	while(SensorValue[Touch] == 0){}
	while(SensorValue[Touch] == 1){}
	bright = SensorValue[colour];

	writeDebugStreamLine("bright = %d", bright);

	while(SensorValue[Touch] == 0){}
	while(SensorValue[Touch] == 1){}
	dark = SensorValue[colour];

	writeDebugStreamLine("dark = %d", dark);

	threshold = (bright + dark)/2;

	writeDebugStreamLine("threshold = %d", threshold);

	while(SensorValue[Touch] == 0){}
	while(SensorValue[Touch] == 1){}
  //--------------------------------------------------

	while(1)
	{
		light_value = SensorValue(color);
		if(light_value > THRESHOLD)
		{
			motor[motorB] = -20;
			motor[motorC] = -20;
			sleep(2000);

			motor[motorB] = 20;
			motor[motorC] = 0;
			sleep(2000);

			motor[motorB] = 20;
			motor[motorC] = 20;
			sleep(2000);
		}
		else
		{
			continue;
		}
	}
}
