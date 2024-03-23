#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProjectionType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ProjectionType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ProjectionType);
// Type: Amazon.DynamoDBv2::ProjectionType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ProjectionType*
class CORDL_TYPE ProjectionType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ALL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL, put = setStaticF_ALL))::Amazon::DynamoDBv2::ProjectionType* ALL;

  /// @brief Field INCLUDE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INCLUDE, put = setStaticF_INCLUDE))::Amazon::DynamoDBv2::ProjectionType* INCLUDE;

  /// @brief Field KEYS_ONLY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KEYS_ONLY, put = setStaticF_KEYS_ONLY))::Amazon::DynamoDBv2::ProjectionType* KEYS_ONLY;

  /// @brief Method FindValue, addr 0x12120c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ProjectionType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ProjectionType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1212058, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ProjectionType* getStaticF_ALL();

  static inline ::Amazon::DynamoDBv2::ProjectionType* getStaticF_INCLUDE();

  static inline ::Amazon::DynamoDBv2::ProjectionType* getStaticF_KEYS_ONLY();

  /// @brief Method op_Implicit, addr 0x121212c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ProjectionType* op_Implicit___Amazon__DynamoDBv2__ProjectionType_(::StringW value);

  static inline void setStaticF_ALL(::Amazon::DynamoDBv2::ProjectionType* value);

  static inline void setStaticF_INCLUDE(::Amazon::DynamoDBv2::ProjectionType* value);

  static inline void setStaticF_KEYS_ONLY(::Amazon::DynamoDBv2::ProjectionType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectionType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectionType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectionType(ProjectionType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectionType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectionType(ProjectionType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ProjectionType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ProjectionType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ProjectionType*, "Amazon.DynamoDBv2", "ProjectionType");
