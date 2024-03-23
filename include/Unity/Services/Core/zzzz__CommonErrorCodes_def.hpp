#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonErrorCodes)
// Forward declare root types
namespace Unity::Services::Core {
class CommonErrorCodes;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::CommonErrorCodes);
// Type: Unity.Services.Core::CommonErrorCodes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::CommonErrorCodes*
class CORDL_TYPE CommonErrorCodes : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonErrorCodes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonErrorCodes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonErrorCodes(CommonErrorCodes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonErrorCodes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonErrorCodes(CommonErrorCodes const&) = delete;

  /// @brief Field ApiMissing offset 0xffffffff size 0x4
  static constexpr int32_t ApiMissing{ static_cast<int32_t>(0x4) };

  /// @brief Field Forbidden offset 0xffffffff size 0x4
  static constexpr int32_t Forbidden{ static_cast<int32_t>(0x35) };

  /// @brief Field InvalidRequest offset 0xffffffff size 0x4
  static constexpr int32_t InvalidRequest{ static_cast<int32_t>(0x37) };

  /// @brief Field InvalidToken offset 0xffffffff size 0x4
  static constexpr int32_t InvalidToken{ static_cast<int32_t>(0x33) };

  /// @brief Field NotFound offset 0xffffffff size 0x4
  static constexpr int32_t NotFound{ static_cast<int32_t>(0x36) };

  /// @brief Field RequestRejected offset 0xffffffff size 0x4
  static constexpr int32_t RequestRejected{ static_cast<int32_t>(0x5) };

  /// @brief Field ServiceUnavailable offset 0xffffffff size 0x4
  static constexpr int32_t ServiceUnavailable{ static_cast<int32_t>(0x3) };

  /// @brief Field Timeout offset 0xffffffff size 0x4
  static constexpr int32_t Timeout{ static_cast<int32_t>(0x2) };

  /// @brief Field TokenExpired offset 0xffffffff size 0x4
  static constexpr int32_t TokenExpired{ static_cast<int32_t>(0x34) };

  /// @brief Field TooManyRequests offset 0xffffffff size 0x4
  static constexpr int32_t TooManyRequests{ static_cast<int32_t>(0x32) };

  /// @brief Field TransportError offset 0xffffffff size 0x4
  static constexpr int32_t TransportError{ static_cast<int32_t>(0x1) };

  /// @brief Field Unknown offset 0xffffffff size 0x4
  static constexpr int32_t Unknown{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::CommonErrorCodes, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::CommonErrorCodes);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::CommonErrorCodes*, "Unity.Services.Core", "CommonErrorCodes");
