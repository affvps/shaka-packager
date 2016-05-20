// Copyright 2016 Google Inc. All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd
//
// Enhanced AC3 audio utility functions.

#ifndef MEDIA_FILTERS_EC3_AUDIO_UTIL_H_
#define MEDIA_FILTERS_EC3_AUDIO_UTIL_H_

#include <stdint.h>
#include <vector>

namespace shaka {
namespace media {

/// Parse data from EC3Specific box and calculate EC3 channel map value based on
/// ETSI TS 102 366 V1.3.1 Digital Audio Compression (AC-3, Enhanced AC-3)
/// Standard E.1.3.1.8.
bool CalculateEC3ChannelMap(const std::vector<uint8_t>& ec3_data,
                            uint32_t* channel_map);

}  // namespace media
}  // namespace shaka

#endif  // MEDIA_FILTERS_EC3_AUDIO_UTIL_H_
