#import "TargetConditionals.h"

#if TARGET_OS_IPHONE
#import "iOS/GPUImagePicture.h"
#else
#import "Mac/GPUImagePicture.h"
#endif
