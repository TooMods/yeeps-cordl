#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OperationType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class OperationType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::OperationType);
// Type: Amazon.DynamoDBv2::OperationType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::OperationType*
class CORDL_TYPE OperationType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field INSERT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INSERT, put = setStaticF_INSERT))::Amazon::DynamoDBv2::OperationType* INSERT;

  /// @brief Field MODIFY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MODIFY, put = setStaticF_MODIFY))::Amazon::DynamoDBv2::OperationType* MODIFY;

  /// @brief Field REMOVE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_REMOVE, put = setStaticF_REMOVE))::Amazon::DynamoDBv2::OperationType* REMOVE;

  /// @brief Method FindValue, addr 0x1213fa4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::OperationType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::OperationType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1213f3c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::OperationType* getStaticF_INSERT();

  static inline ::Amazon::DynamoDBv2::OperationType* getStaticF_MODIFY();

  static inline ::Amazon::DynamoDBv2::OperationType* getStaticF_REMOVE();

  /// @brief Method op_Implicit, addr 0x1214010, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::OperationType* op_Implicit___Amazon__DynamoDBv2__OperationType_(::StringW value);

  static inline void setStaticF_INSERT(::Amazon::DynamoDBv2::OperationType* value);

  static inline void setStaticF_MODIFY(::Amazon::DynamoDBv2::OperationType* value);

  static inline void setStaticF_REMOVE(::Amazon::DynamoDBv2::OperationType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OperationType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperationType(OperationType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperationType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperationType(OperationType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::OperationType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::OperationType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::OperationType*, "Amazon.DynamoDBv2", "OperationType");
