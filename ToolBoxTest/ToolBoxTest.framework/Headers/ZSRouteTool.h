//
//  ZSRouteTool.h
//  AFNetworking
//
//  Created by 张森 on 2019/6/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// 路由出错
static NSString *const ZSRouteNull = @"ZSRouteNull";

/// 场景未定义
static NSString *const ZSRouteNotFound = @"ZSRouteNotFound";

/// http[s]链接的Web场景
static NSString *const ZSRouteWebView = @"ZSRouteWebView";

/// 跳转App Store
static NSString *const ZSRouteAppStore = @"ZSRouteAppStore";

/// 原生Tabbar
static NSString *const ZSRouteTabbar = @"ZSRouteTabbar";


@interface ZSRouteTool : NSObject

/**
 获取路由的params

 @param route_link 路由地址
 @return 返回路由params
 {@"scene" : 场景字符串, @"query" : 场景携带参数, @"extend" : 扩展, @"selIndex" : 要跳转的tabbar的index}
 */
+ (NSDictionary *)zs_getRouteParams:(NSString *)route_link;

/**
 获取路由的URL

 @param route_link 路由地址
 @return 路由的URL
 */
+ (NSURL *)zs_getRouteURL:(NSString *)route_link;

/**
 获取路由的URL的path

 @param route_link 路由地址
 @return 路由的URL的path
 */
+ (NSString *)zs_getRouteURLPath:(NSString *)route_link;

/**
 获取路由参数

 @param string query字符串或路由地址
 @return 路由参数
 */
+ (NSDictionary *)zs_getRouteQuery:(NSString *)string;

/**
 获取路由场景

 @param string host字符串
 @return 路由场景
 */
+ (NSString *)zs_getRouteScene:(NSString *)string;

/**
 获取需要跳转的tabbar的index

 @param scene hot字符串
 @return 需要跳转的tabbar的index
 */
+ (NSInteger)zs_indexOfTabbarScene:(NSString *)scene;

/**
 获取当前的导航控制器

 @return 当前的导航控制器
 */
+ (UINavigationController *)zs_getNavigationController;

/**
 跳转AppStore

 @param url AppStore链接
 */
+ (void)zs_appStore:(NSString *)url;

/**
 push到对应场景，默认开启动画

 @param controller 需要push的控制器对象
 @param onlyExistControllerClassName push队列中之可以存在一个的控制器类名，可以为nil
 @return 返回YES表示成功跳转
 */
+ (BOOL)zs_routePushViewController:(UIViewController *)controller
      onlyExistControllerClassName:(NSString *)onlyExistControllerClassName;


/**
push到对应场景

 @param controller controller 需要push的控制器对象
 @param onlyExistControllerClassName push队列中之可以存在一个的控制器类名，可以为nil
 @param animation 是否开启动画
 @return 返回YES表示成功跳转
 */
+ (BOOL)zs_routePushViewController:(UIViewController *)controller
      onlyExistControllerClassName:(NSString *)onlyExistControllerClassName
                         animation:(BOOL)animation;

/**
 present到对应的场景，默认开启动画

 @param controller 需要present的控制器对象
 @param navigationClassName 需要present的控制器的导航类名，为nil表示不需要添加导航
 @return 返回YES表示成功跳转
 */
+ (BOOL)zs_routePresentViewController:(UIViewController *)controller
                  navigationClassName:(NSString *)navigationClassName;

/**
 present到对应的场景

 @param controller 需要present的控制器对象
 @param navigationClassName 需要present的控制器的导航类名，为nil表示不需要添加导航
 @param animation 是否开启动画
 @param complete 动画完成回调
 @return 返回YES表示成功跳转
 */
+ (BOOL)zs_routePresentViewController:(UIViewController *)controller
                  navigationClassName:(NSString *)navigationClassName
                            animation:(BOOL)animation
                             complete:(void(^)(void))complete;
@end

