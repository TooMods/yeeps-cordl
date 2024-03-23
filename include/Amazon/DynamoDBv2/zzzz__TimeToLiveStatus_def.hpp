#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimeToLiveStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class TimeToLiveStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::TimeToLiveStatus);
// Type: Amazon.DynamoDBv2::TimeToLiveStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::TimeToLiveStatus*
class CORDL_TYPE TimeToLiveStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLED, put = setStaticF_DISABLED))::Amazon::DynamoDBv2::TimeToLiveStatus* DISABLED;

  /// @brief Field DISABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLING, put = setStaticF_DISABLING))::Amazon::DynamoDBv2::TimeToLiveStatus* DISABLING;

  /// @brief Field ENABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLED, put = setStaticF_ENABLED))::Amazon::DynamoDBv2::TimeToLiveStatus* ENABLED;

  /// @brief Field ENABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLING, put = setStaticF_ENABLING))::Amazon::DynamoDBv2::TimeToLiveStatus* ENABLING;

  /// @brief Method FindValue, addr 0x1213d64, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1213cfc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* getStaticF_DISABLED();

  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* getStaticF_DISABLING();

  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* getStaticF_ENABLED();

  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* getStaticF_ENABLING();

  /// @brief Method op_Implicit, addr 0x1213dd0, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::TimeToLiveStatus* op_Implicit___Amazon__DynamoDBv2__TimeToLiveStatus_(::StringW value);

  static inline void setStaticF_DISABLED(::Amazon::DynamoDBv2::TimeToLiveStatus* value);

  static inline void setStaticF_DISABLING(::Amazon::DynamoDBv2::TimeToLiveStatus* value);

  static inline void setStaticF_ENABLED(::Amazon::DynamoDBv2::TimeToLiveStatus* value);

  static inline void setStaticF_ENABLING(::Amazon::DynamoDBv2::TimeToLiveStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeToLiveStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeToLiveStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeToLiveStatus(TimeToLiveStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeToLiveStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeToLiveStatus(TimeToLiveStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::TimeToLiveStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::TimeToLiveStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::TimeToLiveStatus*, "Amazon.DynamoDBv2", "TimeToLiveStatus");
