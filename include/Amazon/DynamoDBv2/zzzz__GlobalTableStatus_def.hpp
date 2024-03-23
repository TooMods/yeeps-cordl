#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GlobalTableStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class GlobalTableStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::GlobalTableStatus);
// Type: Amazon.DynamoDBv2::GlobalTableStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::GlobalTableStatus*
class CORDL_TYPE GlobalTableStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ACTIVE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ACTIVE, put = setStaticF_ACTIVE))::Amazon::DynamoDBv2::GlobalTableStatus* ACTIVE;

  /// @brief Field CREATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREATING, put = setStaticF_CREATING))::Amazon::DynamoDBv2::GlobalTableStatus* CREATING;

  /// @brief Field DELETING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DELETING, put = setStaticF_DELETING))::Amazon::DynamoDBv2::GlobalTableStatus* DELETING;

  /// @brief Field UPDATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATING, put = setStaticF_UPDATING))::Amazon::DynamoDBv2::GlobalTableStatus* UPDATING;

  /// @brief Method FindValue, addr 0x1211890, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1211828, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* getStaticF_ACTIVE();

  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* getStaticF_CREATING();

  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* getStaticF_DELETING();

  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* getStaticF_UPDATING();

  /// @brief Method op_Implicit, addr 0x12118fc, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::GlobalTableStatus* op_Implicit___Amazon__DynamoDBv2__GlobalTableStatus_(::StringW value);

  static inline void setStaticF_ACTIVE(::Amazon::DynamoDBv2::GlobalTableStatus* value);

  static inline void setStaticF_CREATING(::Amazon::DynamoDBv2::GlobalTableStatus* value);

  static inline void setStaticF_DELETING(::Amazon::DynamoDBv2::GlobalTableStatus* value);

  static inline void setStaticF_UPDATING(::Amazon::DynamoDBv2::GlobalTableStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalTableStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalTableStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalTableStatus(GlobalTableStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalTableStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalTableStatus(GlobalTableStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::GlobalTableStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::GlobalTableStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::GlobalTableStatus*, "Amazon.DynamoDBv2", "GlobalTableStatus");
