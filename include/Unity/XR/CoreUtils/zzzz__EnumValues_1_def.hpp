#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EnumValues_1)
// Forward declare root types
namespace Unity::XR::CoreUtils {
template <typename T> class EnumValues_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::EnumValues_1);
// Type: Unity.XR.CoreUtils::EnumValues`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::EnumValues`1<T>*
class CORDL_TYPE EnumValues_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Values, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Values, put = setStaticF_Values))::ArrayW<T, ::Array<T>*> Values;

  static inline ::ArrayW<T, ::Array<T>*> getStaticF_Values();

  static inline void setStaticF_Values(::ArrayW<T, ::Array<T>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumValues_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumValues_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumValues_1(EnumValues_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumValues_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumValues_1(EnumValues_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::EnumValues_1, "Unity.XR.CoreUtils", "EnumValues`1");
