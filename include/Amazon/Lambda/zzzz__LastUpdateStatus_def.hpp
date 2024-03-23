#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LastUpdateStatus)
// Forward declare root types
namespace Amazon::Lambda {
class LastUpdateStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::LastUpdateStatus);
// Type: Amazon.Lambda::LastUpdateStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::LastUpdateStatus*
class CORDL_TYPE LastUpdateStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Failed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Failed, put = setStaticF_Failed))::Amazon::Lambda::LastUpdateStatus* Failed;

  /// @brief Field InProgress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InProgress, put = setStaticF_InProgress))::Amazon::Lambda::LastUpdateStatus* InProgress;

  /// @brief Field Successful, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Successful, put = setStaticF_Successful))::Amazon::Lambda::LastUpdateStatus* Successful;

  /// @brief Method FindValue, addr 0x2bb5c2c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::LastUpdateStatus* FindValue(::StringW value);

  static inline ::Amazon::Lambda::LastUpdateStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb5bc4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::LastUpdateStatus* getStaticF_Failed();

  static inline ::Amazon::Lambda::LastUpdateStatus* getStaticF_InProgress();

  static inline ::Amazon::Lambda::LastUpdateStatus* getStaticF_Successful();

  /// @brief Method op_Implicit, addr 0x2bb5c98, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::LastUpdateStatus* op_Implicit___Amazon__Lambda__LastUpdateStatus_(::StringW value);

  static inline void setStaticF_Failed(::Amazon::Lambda::LastUpdateStatus* value);

  static inline void setStaticF_InProgress(::Amazon::Lambda::LastUpdateStatus* value);

  static inline void setStaticF_Successful(::Amazon::Lambda::LastUpdateStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LastUpdateStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LastUpdateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LastUpdateStatus(LastUpdateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LastUpdateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LastUpdateStatus(LastUpdateStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::LastUpdateStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::LastUpdateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::LastUpdateStatus*, "Amazon.Lambda", "LastUpdateStatus");
