#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DestinationStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class DestinationStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DestinationStatus);
// Type: Amazon.DynamoDBv2::DestinationStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::DestinationStatus*
class CORDL_TYPE DestinationStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ACTIVE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ACTIVE, put = setStaticF_ACTIVE))::Amazon::DynamoDBv2::DestinationStatus* ACTIVE;

  /// @brief Field DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLED, put = setStaticF_DISABLED))::Amazon::DynamoDBv2::DestinationStatus* DISABLED;

  /// @brief Field DISABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLING, put = setStaticF_DISABLING))::Amazon::DynamoDBv2::DestinationStatus* DISABLING;

  /// @brief Field ENABLE_FAILED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLE_FAILED, put = setStaticF_ENABLE_FAILED))::Amazon::DynamoDBv2::DestinationStatus* ENABLE_FAILED;

  /// @brief Field ENABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLING, put = setStaticF_ENABLING))::Amazon::DynamoDBv2::DestinationStatus* ENABLING;

  /// @brief Method FindValue, addr 0x1211238, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DestinationStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::DestinationStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x12111d0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::DestinationStatus* getStaticF_ACTIVE();

  static inline ::Amazon::DynamoDBv2::DestinationStatus* getStaticF_DISABLED();

  static inline ::Amazon::DynamoDBv2::DestinationStatus* getStaticF_DISABLING();

  static inline ::Amazon::DynamoDBv2::DestinationStatus* getStaticF_ENABLE_FAILED();

  static inline ::Amazon::DynamoDBv2::DestinationStatus* getStaticF_ENABLING();

  /// @brief Method op_Implicit, addr 0x12112a4, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DestinationStatus* op_Implicit___Amazon__DynamoDBv2__DestinationStatus_(::StringW value);

  static inline void setStaticF_ACTIVE(::Amazon::DynamoDBv2::DestinationStatus* value);

  static inline void setStaticF_DISABLED(::Amazon::DynamoDBv2::DestinationStatus* value);

  static inline void setStaticF_DISABLING(::Amazon::DynamoDBv2::DestinationStatus* value);

  static inline void setStaticF_ENABLE_FAILED(::Amazon::DynamoDBv2::DestinationStatus* value);

  static inline void setStaticF_ENABLING(::Amazon::DynamoDBv2::DestinationStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DestinationStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DestinationStatus(DestinationStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DestinationStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DestinationStatus(DestinationStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DestinationStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::DestinationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DestinationStatus*, "Amazon.DynamoDBv2", "DestinationStatus");
