#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeEventHandle)
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
struct RuntimeEventHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeEventHandle);
// Type: Mono::RuntimeEventHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// CS Name: ::Mono::RuntimeEventHandle
struct CORDL_TYPE RuntimeEventHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) void* Value;

  /// @brief Method Equals, addr 0x1d03744, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1d03850, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x1d03734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* v);

  /// @brief Method get_Value, addr 0x1d0373c, size 0x8, virtual false, abstract: false, final false
  inline void* get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeEventHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
  constexpr RuntimeEventHandle(void* value) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  void* value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeEventHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::RuntimeEventHandle, value) == 0x0, "Offset mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeEventHandle, "Mono", "RuntimeEventHandle");
