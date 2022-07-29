
task main()
{
	float a = sinDegrees(45);
	float b = sinDegrees(30);
	float c = cosDegrees(45);
	float d = cosDegrees(30);
	float e = sinDegrees(60);
	float f = cosDegrees(60);
	writeDebugStreamLine("sin 45 = %.2f", a);
	writeDebugStreamLine("sin 30 = %.2f", b);
	writeDebugStreamLine("cos 45 = %.2f", c);
	writeDebugStreamLine("cos 30 = %.2f", d);
	writeDebugStreamLine("sin 60 = %.2f", e);
	writeDebugStreamLine("cos 60 = %.2f", f);
}
