#import "TargetConditionals.h"

#if TARGET_OS_IPHONE
#import "iOS/GPUImageMovieWriter.h"
#else
#import "Mac/GPUImageMovieWriter.h"
#endif
