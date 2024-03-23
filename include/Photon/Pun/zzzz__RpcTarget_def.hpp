#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcTarget)
// Forward declare root types
namespace Photon::Pun {
struct RpcTarget;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::RpcTarget);
// Type: Photon.Pun::RpcTarget
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::Photon.Pun::RpcTarget
struct CORDL_TYPE RpcTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RpcTarget_Unwrapped
  enum struct __RpcTarget_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_Others = static_cast<int32_t>(0x1),
    __E_MasterClient = static_cast<int32_t>(0x2),
    __E_AllBuffered = static_cast<int32_t>(0x3),
    __E_OthersBuffered = static_cast<int32_t>(0x4),
    __E_AllViaServer = static_cast<int32_t>(0x5),
    __E_AllBufferedViaServer = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RpcTarget_Unwrapped() const noexcept {
    return static_cast<__RpcTarget_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcTarget();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RpcTarget(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::RpcTarget const All;

  /// @brief Field AllBuffered value: static_cast<int32_t>(0x3)
  static ::Photon::Pun::RpcTarget const AllBuffered;

  /// @brief Field AllBufferedViaServer value: static_cast<int32_t>(0x6)
  static ::Photon::Pun::RpcTarget const AllBufferedViaServer;

  /// @brief Field AllViaServer value: static_cast<int32_t>(0x5)
  static ::Photon::Pun::RpcTarget const AllViaServer;

  /// @brief Field MasterClient value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::RpcTarget const MasterClient;

  /// @brief Field Others value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::RpcTarget const Others;

  /// @brief Field OthersBuffered value: static_cast<int32_t>(0x4)
  static ::Photon::Pun::RpcTarget const OthersBuffered;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::RpcTarget, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::RpcTarget, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::RpcTarget, "Photon.Pun", "RpcTarget");
