#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SSEStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class SSEStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::SSEStatus);
// Type: Amazon.DynamoDBv2::SSEStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::SSEStatus*
class CORDL_TYPE SSEStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLED, put = setStaticF_DISABLED))::Amazon::DynamoDBv2::SSEStatus* DISABLED;

  /// @brief Field DISABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLING, put = setStaticF_DISABLING))::Amazon::DynamoDBv2::SSEStatus* DISABLING;

  /// @brief Field ENABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLED, put = setStaticF_ENABLED))::Amazon::DynamoDBv2::SSEStatus* ENABLED;

  /// @brief Field ENABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLING, put = setStaticF_ENABLING))::Amazon::DynamoDBv2::SSEStatus* ENABLING;

  /// @brief Field UPDATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATING, put = setStaticF_UPDATING))::Amazon::DynamoDBv2::SSEStatus* UPDATING;

  /// @brief Method FindValue, addr 0x12133fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::SSEStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::SSEStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1213394, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::SSEStatus* getStaticF_DISABLED();

  static inline ::Amazon::DynamoDBv2::SSEStatus* getStaticF_DISABLING();

  static inline ::Amazon::DynamoDBv2::SSEStatus* getStaticF_ENABLED();

  static inline ::Amazon::DynamoDBv2::SSEStatus* getStaticF_ENABLING();

  static inline ::Amazon::DynamoDBv2::SSEStatus* getStaticF_UPDATING();

  /// @brief Method op_Implicit, addr 0x1213468, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::SSEStatus* op_Implicit___Amazon__DynamoDBv2__SSEStatus_(::StringW value);

  static inline void setStaticF_DISABLED(::Amazon::DynamoDBv2::SSEStatus* value);

  static inline void setStaticF_DISABLING(::Amazon::DynamoDBv2::SSEStatus* value);

  static inline void setStaticF_ENABLED(::Amazon::DynamoDBv2::SSEStatus* value);

  static inline void setStaticF_ENABLING(::Amazon::DynamoDBv2::SSEStatus* value);

  static inline void setStaticF_UPDATING(::Amazon::DynamoDBv2::SSEStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SSEStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SSEStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SSEStatus(SSEStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SSEStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SSEStatus(SSEStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::SSEStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::SSEStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::SSEStatus*, "Amazon.DynamoDBv2", "SSEStatus");
