#import "TargetConditionals.h"

#if TARGET_OS_IPHONE
#import "iOS/GPUImageView.h"
#else
#import "Mac/GPUImageView.h"
#endif
