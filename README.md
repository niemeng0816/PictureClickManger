# PictureClickManger
点击图片
1.接入方式
pod 'PictureclickKit'

2.使用
在需要浏览图片的地方引入头文件#import <PictureClickMangerKit/PictureClick.h>

3.调用方式
self.imageUrlArray = [@[@"https://gimg2.baidu.com/image_search/src=http%3A%2F%2Fimg.jj20.com%2Fup%2Fallimg%2Ftp09%2F21040G50U24617-0-lp.jpg&refer=http%3A%2F%2Fimg.jj20.com&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=jpeg?sec=1623306078&t=bfea2ef5ce89b1b49cb98dcefe5aecac",@"https://gimg2.baidu.com/image_search/src=http%3A%2F%2Fpic1.win4000.com%2Fwallpaper%2F9%2F53fd6ae0ed153.jpg&refer=http%3A%2F%2Fpic1.win4000.com&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=jpeg?sec=1623306209&t=8429907ea693374ba9197e4c249d677e",@"https://gimg2.baidu.com/image_search/src=http%3A%2F%2Fwx1.sinaimg.cn%2Flarge%2F0085ccsuly4gph3z0ghe3j30yg0jeb29.jpg&refer=http%3A%2F%2Fwx1.sinaimg.cn&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=jpeg?sec=1623306210&t=60ab9ec5fe5e6d7f6659a60f1c2278ba"] mutableCopy];
[[PictureClick sharePicture]handlePicture:self.imageUrlArray withIndex:2];
