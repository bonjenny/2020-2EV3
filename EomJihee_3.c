
task main()
{
	sleep(150);
	playTone(392, 45); //G4
	playTone(440, 30); //A4
	playTone(523, 30); //C5

	sleep(300);
	playTone(587, 45); //D5
	playTone(699, 45); //F5
	playTone(880, 45); //A5
	playTone(699, 15); //F5
	Sleep(300);

	playTone(784, 60); //G5
	playTone(880, 90); //A5
	sleep(300);
	playTone(699, 30); //F5
	playTone(699, 30); //F5
	playTone(699, 30); //F5

	playTone(699, 30); //F5
	playTone(699, 30); //F5
	playTone(699, 30); //F5
	playTone(699, 30); //F5
	playTone(699, 30); //F5
	playTone(587, 30); //D5
	playTone(523, 30); //C5
	playTone(784, 45); //G5

	playTone(880, 45); //A5
	playTone(699, 120); //F5
	sleep(300);
}
