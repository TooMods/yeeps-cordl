#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProvisionedConcurrencyStatusEnum)
// Forward declare root types
namespace Amazon::Lambda {
class ProvisionedConcurrencyStatusEnum;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum);
// Type: Amazon.Lambda::ProvisionedConcurrencyStatusEnum
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::ProvisionedConcurrencyStatusEnum*
class CORDL_TYPE ProvisionedConcurrencyStatusEnum : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field FAILED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FAILED, put = setStaticF_FAILED))::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* FAILED;

  /// @brief Field IN_PROGRESS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IN_PROGRESS, put = setStaticF_IN_PROGRESS))::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* IN_PROGRESS;

  /// @brief Field READY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_READY, put = setStaticF_READY))::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* READY;

  /// @brief Method FindValue, addr 0x2bb6560, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* FindValue(::StringW value);

  static inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb64f8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* getStaticF_FAILED();

  static inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* getStaticF_IN_PROGRESS();

  static inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* getStaticF_READY();

  /// @brief Method op_Implicit, addr 0x2bb65cc, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* op_Implicit___Amazon__Lambda__ProvisionedConcurrencyStatusEnum_(::StringW value);

  static inline void setStaticF_FAILED(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value);

  static inline void setStaticF_IN_PROGRESS(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value);

  static inline void setStaticF_READY(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedConcurrencyStatusEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyStatusEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedConcurrencyStatusEnum(ProvisionedConcurrencyStatusEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyStatusEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedConcurrencyStatusEnum(ProvisionedConcurrencyStatusEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "Amazon.Lambda", "ProvisionedConcurrencyStatusEnum");
