#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(State)
// Forward declare root types
namespace Amazon::Lambda {
class State;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::State);
// Type: Amazon.Lambda::State
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::State*
class CORDL_TYPE State : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Active, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Active, put = setStaticF_Active))::Amazon::Lambda::State* Active;

  /// @brief Field Failed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Failed, put = setStaticF_Failed))::Amazon::Lambda::State* Failed;

  /// @brief Field Inactive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Inactive, put = setStaticF_Inactive))::Amazon::Lambda::State* Inactive;

  /// @brief Field Pending, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pending, put = setStaticF_Pending))::Amazon::Lambda::State* Pending;

  /// @brief Method FindValue, addr 0x2bb7064, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::State* FindValue(::StringW value);

  static inline ::Amazon::Lambda::State* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb6ffc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::State* getStaticF_Active();

  static inline ::Amazon::Lambda::State* getStaticF_Failed();

  static inline ::Amazon::Lambda::State* getStaticF_Inactive();

  static inline ::Amazon::Lambda::State* getStaticF_Pending();

  /// @brief Method op_Implicit, addr 0x2bb70d0, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::State* op_Implicit___Amazon__Lambda__State_(::StringW value);

  static inline void setStaticF_Active(::Amazon::Lambda::State* value);

  static inline void setStaticF_Failed(::Amazon::Lambda::State* value);

  static inline void setStaticF_Inactive(::Amazon::Lambda::State* value);

  static inline void setStaticF_Pending(::Amazon::Lambda::State* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr State();

public:
  // Ctor Parameters [CppParam { name: "", ty: "State", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  State(State&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "State", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  State(State const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::State, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::State);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::State*, "Amazon.Lambda", "State");
