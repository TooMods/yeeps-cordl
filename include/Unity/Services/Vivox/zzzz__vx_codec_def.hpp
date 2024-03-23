#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_codec)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_codec;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_codec);
// Type: Unity.Services.Vivox::vx_codec
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_codec
struct CORDL_TYPE vx_codec {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_codec_Unwrapped
  enum struct __vx_codec_Unwrapped : int32_t {
    __E_vx_codec_siren7 = static_cast<int32_t>(0x2),
    __E_vx_codec_siren14 = static_cast<int32_t>(0x4),
    __E_vx_codec_opus8 = static_cast<int32_t>(0x10),
    __E_vx_codec_opus40 = static_cast<int32_t>(0x20),
    __E_vx_codec_opus57 = static_cast<int32_t>(0x40),
    __E_vx_codec_opus72 = static_cast<int32_t>(0x80),
    __E_vx_codec_pcmu = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_codec_Unwrapped() const noexcept {
    return static_cast<__vx_codec_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_codec();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_codec(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field vx_codec_opus40 value: static_cast<int32_t>(0x20)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_opus40;

  /// @brief Field vx_codec_opus57 value: static_cast<int32_t>(0x40)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_opus57;

  /// @brief Field vx_codec_opus72 value: static_cast<int32_t>(0x80)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_opus72;

  /// @brief Field vx_codec_opus8 value: static_cast<int32_t>(0x10)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_opus8;

  /// @brief Field vx_codec_pcmu value: static_cast<int32_t>(0x10)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_pcmu;

  /// @brief Field vx_codec_siren14 value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_siren14;

  /// @brief Field vx_codec_siren7 value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_codec const vx_codec_siren7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_codec, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_codec, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_codec, "Unity.Services.Vivox", "vx_codec");
