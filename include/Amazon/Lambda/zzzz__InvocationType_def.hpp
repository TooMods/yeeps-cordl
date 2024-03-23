#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvocationType)
// Forward declare root types
namespace Amazon::Lambda {
class InvocationType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::InvocationType);
// Type: Amazon.Lambda::InvocationType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::InvocationType*
class CORDL_TYPE InvocationType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DryRun, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DryRun, put = setStaticF_DryRun))::Amazon::Lambda::InvocationType* DryRun;

  /// @brief Field Event, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Event, put = setStaticF_Event))::Amazon::Lambda::InvocationType* Event;

  /// @brief Field RequestResponse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestResponse, put = setStaticF_RequestResponse))::Amazon::Lambda::InvocationType* RequestResponse;

  /// @brief Method FindValue, addr 0x2bb5a20, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::InvocationType* FindValue(::StringW value);

  static inline ::Amazon::Lambda::InvocationType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb59b8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::InvocationType* getStaticF_DryRun();

  static inline ::Amazon::Lambda::InvocationType* getStaticF_Event();

  static inline ::Amazon::Lambda::InvocationType* getStaticF_RequestResponse();

  /// @brief Method op_Implicit, addr 0x2bb5a8c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::InvocationType* op_Implicit___Amazon__Lambda__InvocationType_(::StringW value);

  static inline void setStaticF_DryRun(::Amazon::Lambda::InvocationType* value);

  static inline void setStaticF_Event(::Amazon::Lambda::InvocationType* value);

  static inline void setStaticF_RequestResponse(::Amazon::Lambda::InvocationType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationType(InvocationType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationType(InvocationType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::InvocationType, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::InvocationType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::InvocationType*, "Amazon.Lambda", "InvocationType");
