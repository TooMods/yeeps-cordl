#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashCodeUtil)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class HashCodeUtil;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::HashCodeUtil);
// Type: Unity.XR.CoreUtils::HashCodeUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::HashCodeUtil*
class CORDL_TYPE HashCodeUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method Combine, addr 0x28727fc, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2);

  /// @brief Method Combine, addr 0x287cbcc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3);

  /// @brief Method Combine, addr 0x287cbe0, size 0x18, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4);

  /// @brief Method Combine, addr 0x287cbf8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5);

  /// @brief Method Combine, addr 0x287cc14, size 0x20, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6);

  /// @brief Method Combine, addr 0x287cc34, size 0x24, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6, int32_t hash7);

  /// @brief Method Combine, addr 0x287cc58, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6, int32_t hash7, int32_t hash8);

  /// @brief Method ReferenceHash, addr 0x28727e8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ReferenceHash(::System::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashCodeUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashCodeUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashCodeUtil(HashCodeUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashCodeUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashCodeUtil(HashCodeUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::HashCodeUtil, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::HashCodeUtil);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::HashCodeUtil*, "Unity.XR.CoreUtils", "HashCodeUtil");
