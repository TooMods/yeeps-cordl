#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__AudioFadeModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Channel3DProperties)
namespace Unity::Services::Vivox {
struct AudioFadeModel;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class Channel3DProperties;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Channel3DProperties);
// Type: Unity.Services.Vivox::Channel3DProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::Channel3DProperties*
class CORDL_TYPE Channel3DProperties : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AudibleDistance)) int32_t AudibleDistance;

  __declspec(property(get = get_AudioFadeIntensityByDistance)) float_t AudioFadeIntensityByDistance;

  __declspec(property(get = get_AudioFadeModel))::Unity::Services::Vivox::AudioFadeModel AudioFadeModel;

  __declspec(property(get = get_ConversationalDistance)) int32_t ConversationalDistance;

  /// @brief Field _audibleDistance, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__audibleDistance, put = __cordl_internal_set__audibleDistance)) int32_t _audibleDistance;

  /// @brief Field _audioFadeIntensityByDistance, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__audioFadeIntensityByDistance, put = __cordl_internal_set__audioFadeIntensityByDistance)) float_t _audioFadeIntensityByDistance;

  /// @brief Field _audioFadeModel, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__audioFadeModel, put = __cordl_internal_set__audioFadeModel))::Unity::Services::Vivox::AudioFadeModel _audioFadeModel;

  /// @brief Field _conversationalDistance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__conversationalDistance, put = __cordl_internal_set__conversationalDistance)) int32_t _conversationalDistance;

  /// @brief Method IsValid, addr 0x1c2cce8, size 0x11c, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::Unity::Services::Vivox::Channel3DProperties* New_ctor();

  static inline ::Unity::Services::Vivox::Channel3DProperties* New_ctor(int32_t audibleDistance, int32_t conversationalDistance, float_t audioFadeIntensityByDistanceaudio,
                                                                        ::Unity::Services::Vivox::AudioFadeModel audioFadeModel);

  static inline ::Unity::Services::Vivox::Channel3DProperties* New_ctor(::StringW properties);

  /// @brief Method ToString, addr 0x1c2ce04, size 0x210, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__audibleDistance() const;

  constexpr int32_t& __cordl_internal_get__audibleDistance();

  constexpr float_t const& __cordl_internal_get__audioFadeIntensityByDistance() const;

  constexpr float_t& __cordl_internal_get__audioFadeIntensityByDistance();

  constexpr ::Unity::Services::Vivox::AudioFadeModel const& __cordl_internal_get__audioFadeModel() const;

  constexpr ::Unity::Services::Vivox::AudioFadeModel& __cordl_internal_get__audioFadeModel();

  constexpr int32_t const& __cordl_internal_get__conversationalDistance() const;

  constexpr int32_t& __cordl_internal_get__conversationalDistance();

  constexpr void __cordl_internal_set__audibleDistance(int32_t value);

  constexpr void __cordl_internal_set__audioFadeIntensityByDistance(float_t value);

  constexpr void __cordl_internal_set__audioFadeModel(::Unity::Services::Vivox::AudioFadeModel value);

  constexpr void __cordl_internal_set__conversationalDistance(int32_t value);

  /// @brief Method .ctor, addr 0x1c2ca38, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1c2cc9c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t audibleDistance, int32_t conversationalDistance, float_t audioFadeIntensityByDistanceaudio, ::Unity::Services::Vivox::AudioFadeModel audioFadeModel);

  /// @brief Method .ctor, addr 0x1c2ca68, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::StringW properties);

  /// @brief Method get_AudibleDistance, addr 0x1c2ca18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AudibleDistance();

  /// @brief Method get_AudioFadeIntensityByDistance, addr 0x1c2ca28, size 0x8, virtual false, abstract: false, final false
  inline float_t get_AudioFadeIntensityByDistance();

  /// @brief Method get_AudioFadeModel, addr 0x1c2ca30, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::AudioFadeModel get_AudioFadeModel();

  /// @brief Method get_ConversationalDistance, addr 0x1c2ca20, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ConversationalDistance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Channel3DProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Channel3DProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Channel3DProperties(Channel3DProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Channel3DProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Channel3DProperties(Channel3DProperties const&) = delete;

  /// @brief Field _audibleDistance, offset: 0x10, size: 0x4, def value: None
  int32_t ____audibleDistance;

  /// @brief Field _conversationalDistance, offset: 0x14, size: 0x4, def value: None
  int32_t ____conversationalDistance;

  /// @brief Field _audioFadeIntensityByDistance, offset: 0x18, size: 0x4, def value: None
  float_t ____audioFadeIntensityByDistance;

  /// @brief Field _audioFadeModel, offset: 0x1c, size: 0x4, def value: None
  ::Unity::Services::Vivox::AudioFadeModel ____audioFadeModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Channel3DProperties, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Channel3DProperties, ____audibleDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Channel3DProperties, ____conversationalDistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Channel3DProperties, ____audioFadeIntensityByDistance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Channel3DProperties, ____audioFadeModel) == 0x1c, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::Channel3DProperties);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Channel3DProperties*, "Unity.Services.Vivox", "Channel3DProperties");
