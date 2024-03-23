#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayUtils)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class NativeArrayUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::NativeArrayUtils);
// Type: Unity.XR.CoreUtils::NativeArrayUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::NativeArrayUtils*
class CORDL_TYPE NativeArrayUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void EnsureCapacity(ByRef<::Unity::Collections::NativeArray_1<T>> array, int32_t capacity, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeArrayUtils(NativeArrayUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeArrayUtils(NativeArrayUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::NativeArrayUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::NativeArrayUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::NativeArrayUtils*, "Unity.XR.CoreUtils", "NativeArrayUtils");
