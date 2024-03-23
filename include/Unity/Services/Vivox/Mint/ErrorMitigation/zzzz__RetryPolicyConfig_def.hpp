#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RetryPolicyConfig)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class ExceptionPredicate;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename TException> class __RetryPolicyConfig____c__17_1;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename TException> class __RetryPolicyConfig____c__DisplayClass18_0_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class RetryPolicyConfig;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename TException> class __RetryPolicyConfig____c__17_1;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename TException> class __RetryPolicyConfig____c__DisplayClass18_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig);
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1);
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1);
// Type: ::<>c__17`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// cpp template
template <typename TException>
// Is value type: false
// CS Name: ::RetryPolicyConfig::<>c__17`1<TException>*
class CORDL_TYPE __RetryPolicyConfig____c__17_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* __9__17_0;

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>* New_ctor();

  /// @brief Method <HandleException>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Exception* _HandleException_b__17_0(::System::Exception* exception);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>* getStaticF___9();

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* getStaticF___9__17_0();

  static inline void setStaticF___9(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>* value);

  static inline void setStaticF___9__17_0(::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RetryPolicyConfig____c__17_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RetryPolicyConfig____c__17_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RetryPolicyConfig____c__17_1(__RetryPolicyConfig____c__17_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RetryPolicyConfig____c__17_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RetryPolicyConfig____c__17_1(__RetryPolicyConfig____c__17_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
// Type: ::<>c__DisplayClass18_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// cpp template
template <typename TException>
// Is value type: false
// CS Name: ::RetryPolicyConfig::<>c__DisplayClass18_0`1<TException>*
class CORDL_TYPE __RetryPolicyConfig____c__DisplayClass18_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field condition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_condition, put = __cordl_internal_set_condition))::System::Func_2<TException, bool>* condition;

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>* New_ctor();

  /// @brief Method <HandleException>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Exception* _HandleException_b__0(::System::Exception* exception);

  constexpr ::System::Func_2<TException, bool>*& __cordl_internal_get_condition();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TException, bool>*> const& __cordl_internal_get_condition() const;

  constexpr void __cordl_internal_set_condition(::System::Func_2<TException, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RetryPolicyConfig____c__DisplayClass18_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RetryPolicyConfig____c__DisplayClass18_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RetryPolicyConfig____c__DisplayClass18_0_1(__RetryPolicyConfig____c__DisplayClass18_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RetryPolicyConfig____c__DisplayClass18_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RetryPolicyConfig____c__DisplayClass18_0_1(__RetryPolicyConfig____c__DisplayClass18_0_1 const&) = delete;

  /// @brief Field condition, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TException, bool>* ___condition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::RetryPolicyConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::RetryPolicyConfig*
class CORDL_TYPE RetryPolicyConfig : public ::System::Object {
public:
  // Declarations
  template <typename TException> using __c__17_1 = ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>;

  template <typename TException> using __c__DisplayClass18_0_1 = ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>;

  __declspec(property(get = get_DelayScale, put = set_DelayScale)) float_t DelayScale;

  __declspec(property(get = get_JitterMagnitude, put = set_JitterMagnitude)) float_t JitterMagnitude;

  __declspec(property(get = get_MaxDelayTime, put = set_MaxDelayTime)) float_t MaxDelayTime;

  __declspec(property(get = get_MaxRetries, put = set_MaxRetries)) uint32_t MaxRetries;

  /// @brief Field <MaxRetries>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxRetries_k__BackingField, put = __cordl_internal_set__MaxRetries_k__BackingField)) uint32_t _MaxRetries_k__BackingField;

  /// @brief Field _delayScale, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__delayScale, put = __cordl_internal_set__delayScale)) float_t _delayScale;

  /// @brief Field _exceptionsToHandle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionsToHandle,
                      put = __cordl_internal_set__exceptionsToHandle))::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>* _exceptionsToHandle;

  /// @brief Field _jitterMagnitude, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__jitterMagnitude, put = __cordl_internal_set__jitterMagnitude)) float_t _jitterMagnitude;

  /// @brief Field _maxDelayTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxDelayTime, put = __cordl_internal_set__maxDelayTime)) float_t _maxDelayTime;

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TException> inline void HandleException();

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TException> inline void HandleException(::System::Func_2<TException, bool>* condition);

  /// @brief Method IsHandledException, addr 0x1707728, size 0x188, virtual false, abstract: false, final false
  inline bool IsHandledException(::System::Exception* e);

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* New_ctor();

  constexpr uint32_t const& __cordl_internal_get__MaxRetries_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__MaxRetries_k__BackingField();

  constexpr float_t const& __cordl_internal_get__delayScale() const;

  constexpr float_t& __cordl_internal_get__delayScale();

  constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>*& __cordl_internal_get__exceptionsToHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>*> const&
  __cordl_internal_get__exceptionsToHandle() const;

  constexpr float_t const& __cordl_internal_get__jitterMagnitude() const;

  constexpr float_t& __cordl_internal_get__jitterMagnitude();

  constexpr float_t const& __cordl_internal_get__maxDelayTime() const;

  constexpr float_t& __cordl_internal_get__maxDelayTime();

  constexpr void __cordl_internal_set__MaxRetries_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__delayScale(float_t value);

  constexpr void __cordl_internal_set__exceptionsToHandle(::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>* value);

  constexpr void __cordl_internal_set__jitterMagnitude(float_t value);

  constexpr void __cordl_internal_set__maxDelayTime(float_t value);

  /// @brief Method .ctor, addr 0x17078b0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DelayScale, addr 0x17076d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_DelayScale();

  /// @brief Method get_JitterMagnitude, addr 0x17076ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_JitterMagnitude();

  /// @brief Method get_MaxDelayTime, addr 0x17076fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_MaxDelayTime();

  /// @brief Method get_MaxRetries, addr 0x170769c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_MaxRetries();

  /// @brief Method set_DelayScale, addr 0x17076dc, size 0x20, virtual false, abstract: false, final false
  inline void set_DelayScale(float_t value);

  /// @brief Method set_JitterMagnitude, addr 0x17076b4, size 0x20, virtual false, abstract: false, final false
  inline void set_JitterMagnitude(float_t value);

  /// @brief Method set_MaxDelayTime, addr 0x1707704, size 0x24, virtual false, abstract: false, final false
  inline void set_MaxDelayTime(float_t value);

  /// @brief Method set_MaxRetries, addr 0x17076a4, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxRetries(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryPolicyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryPolicyConfig(RetryPolicyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryPolicyConfig(RetryPolicyConfig const&) = delete;

  /// @brief Field _jitterMagnitude, offset: 0x10, size: 0x4, def value: None
  float_t ____jitterMagnitude;

  /// @brief Field _delayScale, offset: 0x14, size: 0x4, def value: None
  float_t ____delayScale;

  /// @brief Field _maxDelayTime, offset: 0x18, size: 0x4, def value: None
  float_t ____maxDelayTime;

  /// @brief Field _exceptionsToHandle, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>* ____exceptionsToHandle;

  /// @brief Field <MaxRetries>k__BackingField, offset: 0x28, size: 0x4, def value: None
  uint32_t ____MaxRetries_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig, ____jitterMagnitude) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig, ____delayScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig, ____maxDelayTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig, ____exceptionsToHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig, ____MaxRetries_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
NEED_NO_BOX(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*, "Unity.Services.Vivox.Mint.ErrorMitigation", "RetryPolicyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1, "Unity.Services.Vivox.Mint.ErrorMitigation", "RetryPolicyConfig/<>c__17`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1, "Unity.Services.Vivox.Mint.ErrorMitigation",
                                     "RetryPolicyConfig/<>c__DisplayClass18_0`1");
