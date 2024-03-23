#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackageType)
// Forward declare root types
namespace Amazon::Lambda {
class PackageType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::PackageType);
// Type: Amazon.Lambda::PackageType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::PackageType*
class CORDL_TYPE PackageType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Image, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Image, put = setStaticF_Image))::Amazon::Lambda::PackageType* Image;

  /// @brief Field Zip, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zip, put = setStaticF_Zip))::Amazon::Lambda::PackageType* Zip;

  /// @brief Method FindValue, addr 0x2bb6388, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::PackageType* FindValue(::StringW value);

  static inline ::Amazon::Lambda::PackageType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb6320, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::PackageType* getStaticF_Image();

  static inline ::Amazon::Lambda::PackageType* getStaticF_Zip();

  /// @brief Method op_Implicit, addr 0x2bb63f4, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::PackageType* op_Implicit___Amazon__Lambda__PackageType_(::StringW value);

  static inline void setStaticF_Image(::Amazon::Lambda::PackageType* value);

  static inline void setStaticF_Zip(::Amazon::Lambda::PackageType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageType(PackageType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageType(PackageType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::PackageType, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::PackageType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::PackageType*, "Amazon.Lambda", "PackageType");
