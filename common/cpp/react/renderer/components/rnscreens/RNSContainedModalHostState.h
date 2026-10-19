#pragma once

// iOS-only family: the Android build compiles every source in this directory,
// and no codegen props/emitters exist for it there.
#if !defined(ANDROID)

#include <jsi/jsi.h>
#include <react/renderer/graphics/Point.h>
#include <react/renderer/graphics/Size.h>

namespace facebook::react {

class JSI_EXPORT RNSContainedModalHostState final {
 public:
  RNSContainedModalHostState() = default;
  RNSContainedModalHostState(Size frameSize, Point contentOffset)
      : frameSize(frameSize), contentOffset(contentOffset) {}

  Size frameSize{};
  Point contentOffset{};
};

} // namespace facebook::react

#endif // !defined(ANDROID)
