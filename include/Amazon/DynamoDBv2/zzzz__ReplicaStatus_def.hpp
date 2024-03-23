#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ReplicaStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ReplicaStatus);
// Type: Amazon.DynamoDBv2::ReplicaStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ReplicaStatus*
class CORDL_TYPE ReplicaStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ACTIVE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ACTIVE, put = setStaticF_ACTIVE))::Amazon::DynamoDBv2::ReplicaStatus* ACTIVE;

  /// @brief Field CREATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREATING, put = setStaticF_CREATING))::Amazon::DynamoDBv2::ReplicaStatus* CREATING;

  /// @brief Field CREATION_FAILED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREATION_FAILED, put = setStaticF_CREATION_FAILED))::Amazon::DynamoDBv2::ReplicaStatus* CREATION_FAILED;

  /// @brief Field DELETING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DELETING, put = setStaticF_DELETING))::Amazon::DynamoDBv2::ReplicaStatus* DELETING;

  /// @brief Field INACCESSIBLE_ENCRYPTION_CREDENTIALS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS,
                             put = setStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS))::Amazon::DynamoDBv2::ReplicaStatus* INACCESSIBLE_ENCRYPTION_CREDENTIALS;

  /// @brief Field REGION_DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_REGION_DISABLED, put = setStaticF_REGION_DISABLED))::Amazon::DynamoDBv2::ReplicaStatus* REGION_DISABLED;

  /// @brief Field UPDATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATING, put = setStaticF_UPDATING))::Amazon::DynamoDBv2::ReplicaStatus* UPDATING;

  /// @brief Method FindValue, addr 0x12122cc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReplicaStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1212264, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_ACTIVE();

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_CREATING();

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_CREATION_FAILED();

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_DELETING();

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS();

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_REGION_DISABLED();

  static inline ::Amazon::DynamoDBv2::ReplicaStatus* getStaticF_UPDATING();

  /// @brief Method op_Implicit, addr 0x1212338, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReplicaStatus* op_Implicit___Amazon__DynamoDBv2__ReplicaStatus_(::StringW value);

  static inline void setStaticF_ACTIVE(::Amazon::DynamoDBv2::ReplicaStatus* value);

  static inline void setStaticF_CREATING(::Amazon::DynamoDBv2::ReplicaStatus* value);

  static inline void setStaticF_CREATION_FAILED(::Amazon::DynamoDBv2::ReplicaStatus* value);

  static inline void setStaticF_DELETING(::Amazon::DynamoDBv2::ReplicaStatus* value);

  static inline void setStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS(::Amazon::DynamoDBv2::ReplicaStatus* value);

  static inline void setStaticF_REGION_DISABLED(::Amazon::DynamoDBv2::ReplicaStatus* value);

  static inline void setStaticF_UPDATING(::Amazon::DynamoDBv2::ReplicaStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaStatus(ReplicaStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaStatus(ReplicaStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ReplicaStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ReplicaStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ReplicaStatus*, "Amazon.DynamoDBv2", "ReplicaStatus");
