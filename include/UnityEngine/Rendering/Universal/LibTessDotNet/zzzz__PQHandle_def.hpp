#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PQHandle)
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct PQHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle);
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::PQHandle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::PQHandle
struct CORDL_TYPE PQHandle {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) int32_t Invalid;

  static inline int32_t getStaticF_Invalid();

  static inline void setStaticF_Invalid(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PQHandle();

  // Ctor Parameters [CppParam { name: "_handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PQHandle(int32_t _handle) noexcept;

  /// @brief Field _handle, offset: 0x0, size: 0x4, def value: None
  int32_t _handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle, _handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle, "UnityEngine.Rendering.Universal.LibTessDotNet", "PQHandle");
