#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Vivox/AudioTaps/zzzz__VivoxAudioTap_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxCaptureSourceTap)
// Forward declare root types
namespace Unity::Services::Vivox::AudioTaps {
class VivoxCaptureSourceTap;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap);
// Type: Unity.Services.Vivox.AudioTaps::VivoxCaptureSourceTap
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::AudioTaps {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.AudioTaps::VivoxCaptureSourceTap*
class CORDL_TYPE VivoxCaptureSourceTap : public ::Unity::Services::Vivox::AudioTaps::VivoxAudioTap {
public:
  // Declarations
  __declspec(property(get = get_Identifier))::StringW Identifier;

  /// @brief Method DoAudioFilterRead, addr 0x170cd74, size 0x1c, virtual true, abstract: false, final false
  inline int32_t DoAudioFilterRead(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  static inline ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap* New_ctor();

  /// @brief Method RegisterTap, addr 0x170cd64, size 0x10, virtual true, abstract: false, final false
  inline int32_t RegisterTap(::StringW channelUri);

  /// @brief Method .ctor, addr 0x170cd48, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Identifier, addr 0x170cd08, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Identifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxCaptureSourceTap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxCaptureSourceTap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxCaptureSourceTap(VivoxCaptureSourceTap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxCaptureSourceTap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxCaptureSourceTap(VivoxCaptureSourceTap const&) = delete;

  /// @brief Field identifier offset 0xffffffff size 0x8
  static constexpr ::ConstString identifier{ u"VivoxCaptureSourceTap" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap, 0x60>, "Size mismatch!");

} // namespace Unity::Services::Vivox::AudioTaps
NEED_NO_BOX(::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*, "Unity.Services.Vivox.AudioTaps", "VivoxCaptureSourceTap");
