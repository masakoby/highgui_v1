#include "test_highgui_v1.h"

#include <opencv2/opencv.hpp>

#include "kb_searchfiles.h"
#include "kb_split_string.h"

//	mouse event handler
void mouseCallback(int event_no, int x, int y, int flags, void* param)
{
	int flag_ctrl = flags & 8;
	int flag_shift = flags & 16;
	std::cout <<"mouse: "<< x << ", " << y << ": " << flags << ", " << flag_ctrl << ", " << flag_shift << std::endl;

	//Param* p1 = (Param*)param;

	if (event_no == cv::EVENT_LBUTTONDOWN) {
	}
	else if (event_no == cv::EVENT_LBUTTONUP) {
	}
	else if (event_no == cv::EVENT_RBUTTONDOWN) {
	}
	else if (event_no == cv::EVENT_RBUTTONUP) {
	}
	else if (event_no == cv::EVENT_MOUSEWHEEL) {
		int d = cv::getMouseWheelDelta(flags);
		std::cout << "wheel: " << d << std::endl;
	}
	else if (event_no == cv::EVENT_MOUSEMOVE) {
	}
}

int kb::test_highgui_v1(int argc, char* argv[])
{
	std::string path_img = argv[2];

	//
	std::string dname1, ftitle1, fext1;
	kb::split_path(path_img, dname1, ftitle1, fext1);

	cv::Mat mat1 = cv::imread(path_img);

	//
	cv::namedWindow(ftitle1.c_str(), cv::WINDOW_NORMAL);
	//cv::resizeWindow(ftitle1.c_str(), w, h);
	cv::setMouseCallback(ftitle1.c_str(), mouseCallback, (void*)NULL);

	int wait_time = 0;
	while (1) {
		cv::imshow(ftitle1, mat1);
		int rtn_wk = cv::waitKeyEx(wait_time);
		std::cout << "key: " << rtn_wk << std::endl;

		//	escape
		if (rtn_wk == 27) {
			break;
		}
		//	Enter
		else if (rtn_wk == 13) {
		}
		//	backspace
		else if (rtn_wk == 8) {
		}
		//	space
		else if (rtn_wk == 32) {
		}
		//	tab
		else if (rtn_wk == 9) {
		}
		//	page up
		else if (rtn_wk == 2162688) {
		}
		//	page down
		else if (rtn_wk == 2228224) {
		}
		//	up
		else if (rtn_wk == 2490368) {
		}
		//	down
		else if (rtn_wk == 2621440) {
		}
		//	right
		else if (rtn_wk == 2555904) {
		}
		//	left
		else if (rtn_wk == 2424832) {
		}
		//	a(97) 
		else if (rtn_wk == 97) {
		}
		//	b(98) 
		else if (rtn_wk == 98) {
		}
		//	c(99) 
		else if (rtn_wk == 99) {
		}
		//	d(100) 
		else if (rtn_wk == 100) {
		}
		//	e(101) 
		else if (rtn_wk == 101) {
		}
		//	q(113)
		else if (rtn_wk == 113) {
		}
		//	r(114)
		else if (rtn_wk == 114) {
		}
		//	s(115)
		else if (rtn_wk == 115) {
		}
		//	SHIFT+s (83)
		else if (rtn_wk == 83) {
		}
		//	t(116) 
		else if (rtn_wk == 116) {
		}
		//	w(119) 
		else if (rtn_wk == 119) {
		}
		//	x(120)
		else if (rtn_wk == 120) {
		}
		//	y(121)
		else if (rtn_wk == 121) {
		}
	}

	return 0;
}
