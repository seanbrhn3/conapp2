#include "stdafx.h"

using namespace cv;
using namespace std;
int main(int argc, char**argv) {
	Mat img1(300, 500,CV_16UC1, Scalar(0, 255, 0)); //this image is what I created by specifying the rows, columns, type such as 
	//CV_something, and scalar which is the color in RGB.
	if (img1.empty())
	{
		cout << "Halt there seems to be an error" << endl;
		system("pause");
		return -1;
	}

	namedWindow("TheOverWatcher",CV_WINDOW_AUTOSIZE);
	imshow("TheOverWatcher", img1);

	waitKey(0);

	destroyWindow("TheOverWatcher");
	//this code below is for the image from the internet
	Mat img = imread("eye.JPG", CV_LOAD_IMAGE_COLOR); //loads image that is given in the string then it will give you a veriation of it

	if(img.empty())
	{
		cout << "woh bro we got a problem" << endl; // just epresses a worning if not there
		system("pause"); //will pause the whole program
		return -1;//any integer that is returned that is not 0 is an error message to the cpu
	}
	namedWindow("OverWatcher",CV_WINDOW_NORMAL);//creates a windowand give it a name; other option is CV_WINDOW_NORMAL	
	imshow("OverWatcher",img); //displays the image within the window
	waitKey(0);//Once a key is pressed the program will enact the destroy window function

	destroyWindow("OverWatcher");//The overwatcher falls into a slumber
	return 0;
	
}
