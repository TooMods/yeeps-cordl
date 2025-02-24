#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeStringMarshal)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono {
struct SafeStringMarshal;
}
// Write type traits
MARK_VAL_T(::Mono::SafeStringMarshal);
// Type: Mono::SafeStringMarshal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// CS Name: ::Mono::SafeStringMarshal
struct CORDL_TYPE SafeStringMarshal {
public:
  // Declarations
  __declspec(property(get = get_Value)) void* Value;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x1d03e44, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GFree, addr 0x1d03dc0, size 0x4, virtual false, abstract: false, final false
  static inline void GFree(void* ptr);

  /// @brief Method StringToUtf8, addr 0x1d03da8, size 0x18, virtual false, abstract: false, final false
  static inline void* StringToUtf8(::StringW str);

  /// @brief Method StringToUtf8_icall, addr 0x1d03da4, size 0x4, virtual false, abstract: false, final false
  static inline void* StringToUtf8_icall(ByRef<::StringW> str);

  /// @brief Method .ctor, addr 0x1d03b7c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method get_Value, addr 0x1d03dc4, size 0x80, virtual false, abstract: false, final false
  inline void* get_Value();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeStringMarshal();

  // Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "marshaled_string", ty: "void*", modifiers: "", def_value: None }]
  constexpr SafeStringMarshal(::StringW str, void* marshaled_string) noexcept;

  /// @brief Field str, offset: 0x0, size: 0x8, def value: None
  ::StringW str;

  /// @brief Field marshaled_string, offset: 0x8, size: 0x8, def value: None
  void* marshaled_string;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SafeStringMarshal, 0x10>, "Size mismatch!");

static_assert(offsetof(::Mono::SafeStringMarshal, str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::SafeStringMarshal, marshaled_string) == 0x8, "Offset mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
