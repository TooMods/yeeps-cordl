#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContinuousBackupsStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ContinuousBackupsStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ContinuousBackupsStatus);
// Type: Amazon.DynamoDBv2::ContinuousBackupsStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ContinuousBackupsStatus*
class CORDL_TYPE ContinuousBackupsStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLED, put = setStaticF_DISABLED))::Amazon::DynamoDBv2::ContinuousBackupsStatus* DISABLED;

  /// @brief Field ENABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLED, put = setStaticF_ENABLED))::Amazon::DynamoDBv2::ContinuousBackupsStatus* ENABLED;

  /// @brief Method FindValue, addr 0x1210c14, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1210bac, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* getStaticF_DISABLED();

  static inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* getStaticF_ENABLED();

  /// @brief Method op_Implicit, addr 0x1210c80, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* op_Implicit___Amazon__DynamoDBv2__ContinuousBackupsStatus_(::StringW value);

  static inline void setStaticF_DISABLED(::Amazon::DynamoDBv2::ContinuousBackupsStatus* value);

  static inline void setStaticF_ENABLED(::Amazon::DynamoDBv2::ContinuousBackupsStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuousBackupsStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContinuousBackupsStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuousBackupsStatus(ContinuousBackupsStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousBackupsStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuousBackupsStatus(ContinuousBackupsStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ContinuousBackupsStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ContinuousBackupsStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ContinuousBackupsStatus*, "Amazon.DynamoDBv2", "ContinuousBackupsStatus");
