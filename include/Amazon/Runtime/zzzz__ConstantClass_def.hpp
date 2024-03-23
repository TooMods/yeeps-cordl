#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantClass)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime {
class ConstantClass;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ConstantClass);
// Type: Amazon.Runtime::ConstantClass
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ConstantClass*
class CORDL_TYPE ConstantClass : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::StringW _Value_k__BackingField;

  /// @brief Field staticFields, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_staticFields, put = setStaticF_staticFields))::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::ConstantClass*>*>* staticFields;

  /// @brief Field staticFieldsLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_staticFieldsLock, put = setStaticF_staticFieldsLock))::System::Object* staticFieldsLock;

  /// @brief Method Equals, addr 0x1fe4254, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::Amazon::Runtime::ConstantClass* obj);

  /// @brief Method Equals, addr 0x1fe4170, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1fe431c, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::StringW value);

  /// @brief Method FindValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindValue(::StringW value);

  /// @brief Method GetHashCode, addr 0x1fe4150, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Intern, addr 0x1fe37bc, size 0x154, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ConstantClass* Intern();

  /// @brief Method LoadFields, addr 0x1fe39e0, size 0x770, virtual false, abstract: false, final false
  static inline void LoadFields(::System::Type* t);

  static inline ::Amazon::Runtime::ConstantClass* New_ctor(::StringW value);

  /// @brief Method ToString, addr 0x1fe37a0, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x1fe3910, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW ToString(::System::IFormatProvider* provider);

  constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fe3768, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::ConstantClass*>*>* getStaticF_staticFields();

  static inline ::System::Object* getStaticF_staticFieldsLock();

  /// @brief Method get_Value, addr 0x1fe3790, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method op_Equality, addr 0x1fe39c0, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::Amazon::Runtime::ConstantClass* a, ::Amazon::Runtime::ConstantClass* b);

  /// @brief Method op_Equality, addr 0x1fe4460, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Equality(::Amazon::Runtime::ConstantClass* a, ::StringW b);

  /// @brief Method op_Equality, addr 0x1fe447c, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_Equality(::StringW a, ::Amazon::Runtime::ConstantClass* b);

  /// @brief Method op_Implicit, addr 0x1fe392c, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::Amazon::Runtime::ConstantClass* value);

  /// @brief Method op_Inequality, addr 0x1fe43cc, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Amazon::Runtime::ConstantClass* a, ::Amazon::Runtime::ConstantClass* b);

  /// @brief Method op_Inequality, addr 0x1fe4508, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Amazon::Runtime::ConstantClass* a, ::StringW b);

  /// @brief Method op_Inequality, addr 0x1fe4594, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::StringW a, ::Amazon::Runtime::ConstantClass* b);

  static inline void
  setStaticF_staticFields(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::ConstantClass*>*>* value);

  static inline void setStaticF_staticFieldsLock(::System::Object* value);

  /// @brief Method set_Value, addr 0x1fe3798, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantClass(ConstantClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantClass(ConstantClass const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ConstantClass, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ConstantClass, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ConstantClass);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ConstantClass*, "Amazon.Runtime", "ConstantClass");
