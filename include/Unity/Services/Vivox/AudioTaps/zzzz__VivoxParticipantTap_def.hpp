#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Vivox/AudioTaps/zzzz__VivoxAudioTap_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxParticipantTap)
// Forward declare root types
namespace Unity::Services::Vivox::AudioTaps {
class VivoxParticipantTap;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap);
// Type: Unity.Services.Vivox.AudioTaps::VivoxParticipantTap
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 122, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::AudioTaps {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.AudioTaps::VivoxParticipantTap*
class CORDL_TYPE VivoxParticipantTap : public ::Unity::Services::Vivox::AudioTaps::VivoxAudioTap {
public:
  // Declarations
  __declspec(property(get = get_Identifier))::StringW Identifier;

  __declspec(property(get = get_ParticipantName, put = set_ParticipantName))::StringW ParticipantName;

  __declspec(property(get = get_SilenceInChannelAudioMix, put = set_SilenceInChannelAudioMix)) bool SilenceInChannelAudioMix;

  /// @brief Field m_LastParticipantName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastParticipantName, put = __cordl_internal_set_m_LastParticipantName))::StringW m_LastParticipantName;

  /// @brief Field m_LastSilenceInChannelAudioMix, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LastSilenceInChannelAudioMix, put = __cordl_internal_set_m_LastSilenceInChannelAudioMix)) bool m_LastSilenceInChannelAudioMix;

  /// @brief Field m_ParticipantName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParticipantName, put = __cordl_internal_set_m_ParticipantName))::StringW m_ParticipantName;

  /// @brief Field m_ParticipantUri, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParticipantUri, put = __cordl_internal_set_m_ParticipantUri))::StringW m_ParticipantUri;

  /// @brief Field m_SilenceInChannelAudioMix, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SilenceInChannelAudioMix, put = __cordl_internal_set_m_SilenceInChannelAudioMix)) bool m_SilenceInChannelAudioMix;

  /// @brief Method DoAudioFilterRead, addr 0x170d444, size 0x1c, virtual true, abstract: false, final false
  inline int32_t DoAudioFilterRead(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  static inline ::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap* New_ctor();

  /// @brief Method OnValidate, addr 0x170cfdc, size 0x28, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RegisterTap, addr 0x170d0cc, size 0x378, virtual true, abstract: false, final false
  inline int32_t RegisterTap(::StringW channelUri);

  constexpr ::StringW const& __cordl_internal_get_m_LastParticipantName() const;

  constexpr ::StringW& __cordl_internal_get_m_LastParticipantName();

  constexpr bool const& __cordl_internal_get_m_LastSilenceInChannelAudioMix() const;

  constexpr bool& __cordl_internal_get_m_LastSilenceInChannelAudioMix();

  constexpr ::StringW const& __cordl_internal_get_m_ParticipantName() const;

  constexpr ::StringW& __cordl_internal_get_m_ParticipantName();

  constexpr ::StringW const& __cordl_internal_get_m_ParticipantUri() const;

  constexpr ::StringW& __cordl_internal_get_m_ParticipantUri();

  constexpr bool const& __cordl_internal_get_m_SilenceInChannelAudioMix() const;

  constexpr bool& __cordl_internal_get_m_SilenceInChannelAudioMix();

  constexpr void __cordl_internal_set_m_LastParticipantName(::StringW value);

  constexpr void __cordl_internal_set_m_LastSilenceInChannelAudioMix(bool value);

  constexpr void __cordl_internal_set_m_ParticipantName(::StringW value);

  constexpr void __cordl_internal_set_m_ParticipantUri(::StringW value);

  constexpr void __cordl_internal_set_m_SilenceInChannelAudioMix(bool value);

  /// @brief Method .ctor, addr 0x170d044, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Identifier, addr 0x170d004, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Identifier();

  /// @brief Method get_ParticipantName, addr 0x170ce18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ParticipantName();

  /// @brief Method get_SilenceInChannelAudioMix, addr 0x170cf88, size 0x8, virtual false, abstract: false, final false
  inline bool get_SilenceInChannelAudioMix();

  /// @brief Method set_ParticipantName, addr 0x170ce20, size 0x168, virtual false, abstract: false, final false
  inline void set_ParticipantName(::StringW value);

  /// @brief Method set_SilenceInChannelAudioMix, addr 0x170cf90, size 0x4c, virtual false, abstract: false, final false
  inline void set_SilenceInChannelAudioMix(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxParticipantTap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxParticipantTap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxParticipantTap(VivoxParticipantTap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxParticipantTap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxParticipantTap(VivoxParticipantTap const&) = delete;

  /// @brief Field m_ParticipantUri, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_ParticipantUri;

  /// @brief Field m_ParticipantName, offset: 0x68, size: 0x8, def value: None
  ::StringW ___m_ParticipantName;

  /// @brief Field m_LastParticipantName, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_LastParticipantName;

  /// @brief Field m_SilenceInChannelAudioMix, offset: 0x78, size: 0x1, def value: None
  bool ___m_SilenceInChannelAudioMix;

  /// @brief Field m_LastSilenceInChannelAudioMix, offset: 0x79, size: 0x1, def value: None
  bool ___m_LastSilenceInChannelAudioMix;

  /// @brief Field identifier offset 0xffffffff size 0x8
  static constexpr ::ConstString identifier{ u"VivoxParticipantTap" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap, 0x80>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap, ___m_ParticipantUri) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap, ___m_ParticipantName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap, ___m_LastParticipantName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap, ___m_SilenceInChannelAudioMix) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap, ___m_LastSilenceInChannelAudioMix) == 0x79, "Offset mismatch!");

} // namespace Unity::Services::Vivox::AudioTaps
NEED_NO_BOX(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioTaps::VivoxParticipantTap*, "Unity.Services.Vivox.AudioTaps", "VivoxParticipantTap");
