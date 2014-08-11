#import "TargetConditionals.h"

#if TARGET_OS_IPHONE
#import "iOS/GPUImageContext.h"
#else
#import "Mac/GPUImageContext.h"
#endif
