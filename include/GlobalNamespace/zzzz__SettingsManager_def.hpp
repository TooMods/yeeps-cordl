#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsManager)
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __ImaginationPrompt__OnActionTaken;
}
namespace GlobalNamespace {
class __SettingsManager__OnBooleanSettingChanged;
}
namespace GlobalNamespace {
class __SettingsManager__OnSettingsPromptComplete;
}
namespace GlobalNamespace {
class __SettingsManager____c;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass75_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass77_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass78_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass79_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass80_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass81_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass82_0;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class __SettingsManager__OnBooleanSettingChanged;
}
namespace GlobalNamespace {
class __SettingsManager__OnSettingsPromptComplete;
}
namespace GlobalNamespace {
class __SettingsManager____c;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass75_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass77_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass78_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass79_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass80_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass81_0;
}
namespace GlobalNamespace {
class __SettingsManager____c__DisplayClass82_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsManager);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass78_0);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass80_0);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass81_0);
MARK_REF_PTR_T(::GlobalNamespace::__SettingsManager____c__DisplayClass82_0);
// Type: ::OnBooleanSettingChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::OnBooleanSettingChanged*
class CORDL_TYPE __SettingsManager__OnBooleanSettingChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1439fe8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x143a070, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1439fd0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newValue);

  static inline ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1439f0c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager__OnBooleanSettingChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager__OnBooleanSettingChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager__OnBooleanSettingChanged(__SettingsManager__OnBooleanSettingChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager__OnBooleanSettingChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager__OnBooleanSettingChanged(__SettingsManager__OnBooleanSettingChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSettingsPromptComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::OnSettingsPromptComplete*
class CORDL_TYPE __SettingsManager__OnSettingsPromptComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x143a090, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x143a0b0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x143a07c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x143931c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager__OnSettingsPromptComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager__OnSettingsPromptComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager__OnSettingsPromptComplete(__SettingsManager__OnSettingsPromptComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager__OnSettingsPromptComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager__OnSettingsPromptComplete(__SettingsManager__OnSettingsPromptComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c*
class CORDL_TYPE __SettingsManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SettingsManager____c* __9;

  /// @brief Field <>9__74_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__74_0, put = setStaticF___9__74_0))::GlobalNamespace::__ImaginationPrompt__OnActionTaken* __9__74_0;

  /// @brief Field <>9__75_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__75_5, put = setStaticF___9__75_5))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* __9__75_5;

  static inline ::GlobalNamespace::__SettingsManager____c* New_ctor();

  /// @brief Method <LaunchChangeSettings>b__75_5, addr 0x143a19c, size 0x5c, virtual false, abstract: false, final false
  inline void _LaunchChangeSettings_b__75_5();

  /// @brief Method <TryLaunchSettings>b__74_0, addr 0x143a128, size 0x74, virtual false, abstract: false, final false
  inline void _TryLaunchSettings_b__74_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method .ctor, addr 0x143a120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SettingsManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* getStaticF___9__74_0();

  static inline ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* getStaticF___9__75_5();

  static inline void setStaticF___9(::GlobalNamespace::__SettingsManager____c* value);

  static inline void setStaticF___9__74_0(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value);

  static inline void setStaticF___9__75_5(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c(__SettingsManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c(__SettingsManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass75_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass75_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass75_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* __9__1;

  /// @brief Field <>9__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* __9__2;

  /// @brief Field <>9__3, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__3, put = __cordl_internal_set___9__3))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* __9__3;

  /// @brief Field <>9__4, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__4, put = __cordl_internal_set___9__4))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* __9__4;

  /// @brief Field curSettingIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_curSettingIndex, put = __cordl_internal_set_curSettingIndex)) int32_t curSettingIndex;

  /// @brief Field totalSettingCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_totalSettingCount, put = __cordl_internal_set_totalSettingCount)) int32_t totalSettingCount;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0* New_ctor();

  /// @brief Method <LaunchChangeSettings>b__0, addr 0x143a1f8, size 0xc8, virtual false, abstract: false, final false
  inline void _LaunchChangeSettings_b__0();

  /// @brief Method <LaunchChangeSettings>b__1, addr 0x143a2c0, size 0xc8, virtual false, abstract: false, final false
  inline void _LaunchChangeSettings_b__1();

  /// @brief Method <LaunchChangeSettings>b__2, addr 0x143a388, size 0xc8, virtual false, abstract: false, final false
  inline void _LaunchChangeSettings_b__2();

  /// @brief Method <LaunchChangeSettings>b__3, addr 0x143a450, size 0xc8, virtual false, abstract: false, final false
  inline void _LaunchChangeSettings_b__3();

  /// @brief Method <LaunchChangeSettings>b__4, addr 0x143a518, size 0x11c, virtual false, abstract: false, final false
  inline void _LaunchChangeSettings_b__4();

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get___9__1() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get___9__2() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get___9__3();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get___9__3() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get___9__4();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get___9__4() const;

  constexpr int32_t const& __cordl_internal_get_curSettingIndex() const;

  constexpr int32_t& __cordl_internal_get_curSettingIndex();

  constexpr int32_t const& __cordl_internal_get_totalSettingCount() const;

  constexpr int32_t& __cordl_internal_get_totalSettingCount();

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  constexpr void __cordl_internal_set___9__3(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  constexpr void __cordl_internal_set___9__4(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  constexpr void __cordl_internal_set_curSettingIndex(int32_t value);

  constexpr void __cordl_internal_set_totalSettingCount(int32_t value);

  /// @brief Method .ctor, addr 0x1439314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass75_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass75_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass75_0(__SettingsManager____c__DisplayClass75_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass75_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass75_0(__SettingsManager____c__DisplayClass75_0 const&) = delete;

  /// @brief Field curSettingIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___curSettingIndex;

  /// @brief Field totalSettingCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___totalSettingCount;

  /// @brief Field <>9__4, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* _____9__4;

  /// @brief Field <>9__3, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* _____9__3;

  /// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* _____9__2;

  /// @brief Field <>9__1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, ___curSettingIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, ___totalSettingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, _____9__4) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, _____9__3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, _____9__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0, _____9__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass77_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass77_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass77_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__ImaginationPrompt__OnActionTaken* __9__1;

  /// @brief Field curSettingIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_curSettingIndex, put = __cordl_internal_set_curSettingIndex)) int32_t curSettingIndex;

  /// @brief Field onComplete, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete;

  /// @brief Field totalSettingCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_totalSettingCount, put = __cordl_internal_set_totalSettingCount)) int32_t totalSettingCount;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0* New_ctor();

  /// @brief Method <PromptAllowJoystickTurning>b__0, addr 0x143a634, size 0x170, virtual false, abstract: false, final false
  inline void _PromptAllowJoystickTurning_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method <PromptAllowJoystickTurning>b__1, addr 0x143a7a4, size 0xa4, virtual false, abstract: false, final false
  inline void _PromptAllowJoystickTurning_b__1(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*> const& __cordl_internal_get___9__1() const;

  constexpr int32_t const& __cordl_internal_get_curSettingIndex() const;

  constexpr int32_t& __cordl_internal_get_curSettingIndex();

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get_onComplete() const;

  constexpr int32_t const& __cordl_internal_get_totalSettingCount() const;

  constexpr int32_t& __cordl_internal_get_totalSettingCount();

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value);

  constexpr void __cordl_internal_set_curSettingIndex(int32_t value);

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  constexpr void __cordl_internal_set_totalSettingCount(int32_t value);

  /// @brief Method .ctor, addr 0x14396c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass77_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass77_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass77_0(__SettingsManager____c__DisplayClass77_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass77_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass77_0(__SettingsManager____c__DisplayClass77_0 const&) = delete;

  /// @brief Field curSettingIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___curSettingIndex;

  /// @brief Field totalSettingCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___totalSettingCount;

  /// @brief Field onComplete, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* ___onComplete;

  /// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0, ___curSettingIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0, ___totalSettingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0, ___onComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0, _____9__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass78_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass78_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass78_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onComplete, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass78_0* New_ctor();

  /// @brief Method <PromptIsSmoothTurning>b__0, addr 0x143a848, size 0xa4, virtual false, abstract: false, final false
  inline void _PromptIsSmoothTurning_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get_onComplete() const;

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  /// @brief Method .ctor, addr 0x14399f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass78_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass78_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass78_0(__SettingsManager____c__DisplayClass78_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass78_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass78_0(__SettingsManager____c__DisplayClass78_0 const&) = delete;

  /// @brief Field onComplete, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* ___onComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass78_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass78_0, ___onComplete) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass79_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass79_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass79_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__ImaginationPrompt__OnActionTaken* __9__1;

  /// @brief Field allowPrompt, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_allowPrompt, put = __cordl_internal_set_allowPrompt)) bool allowPrompt;

  /// @brief Field curSettingIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_curSettingIndex, put = __cordl_internal_set_curSettingIndex)) int32_t curSettingIndex;

  /// @brief Field onComplete, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete;

  /// @brief Field totalSettingCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_totalSettingCount, put = __cordl_internal_set_totalSettingCount)) int32_t totalSettingCount;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0* New_ctor();

  /// @brief Method <PromptAllowJoystickRolling>b__0, addr 0x143a8ec, size 0x188, virtual false, abstract: false, final false
  inline void _PromptAllowJoystickRolling_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method <PromptAllowJoystickRolling>b__1, addr 0x143aa74, size 0xbc, virtual false, abstract: false, final false
  inline void _PromptAllowJoystickRolling_b__1(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*> const& __cordl_internal_get___9__1() const;

  constexpr bool const& __cordl_internal_get_allowPrompt() const;

  constexpr bool& __cordl_internal_get_allowPrompt();

  constexpr int32_t const& __cordl_internal_get_curSettingIndex() const;

  constexpr int32_t& __cordl_internal_get_curSettingIndex();

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get_onComplete() const;

  constexpr int32_t const& __cordl_internal_get_totalSettingCount() const;

  constexpr int32_t& __cordl_internal_get_totalSettingCount();

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value);

  constexpr void __cordl_internal_set_allowPrompt(bool value);

  constexpr void __cordl_internal_set_curSettingIndex(int32_t value);

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  constexpr void __cordl_internal_set_totalSettingCount(int32_t value);

  /// @brief Method .ctor, addr 0x1439b78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass79_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass79_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass79_0(__SettingsManager____c__DisplayClass79_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass79_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass79_0(__SettingsManager____c__DisplayClass79_0 const&) = delete;

  /// @brief Field allowPrompt, offset: 0x10, size: 0x1, def value: None
  bool ___allowPrompt;

  /// @brief Field curSettingIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___curSettingIndex;

  /// @brief Field totalSettingCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___totalSettingCount;

  /// @brief Field onComplete, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* ___onComplete;

  /// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0, ___allowPrompt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0, ___curSettingIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0, ___totalSettingCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0, ___onComplete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0, _____9__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass80_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass80_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass80_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onComplete, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass80_0* New_ctor();

  /// @brief Method <PromptLeftHandedMode>b__0, addr 0x143ab30, size 0xa4, virtual false, abstract: false, final false
  inline void _PromptLeftHandedMode_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get_onComplete() const;

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  /// @brief Method .ctor, addr 0x1439b80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass80_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass80_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass80_0(__SettingsManager____c__DisplayClass80_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass80_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass80_0(__SettingsManager____c__DisplayClass80_0 const&) = delete;

  /// @brief Field onComplete, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* ___onComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass80_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass80_0, ___onComplete) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass81_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass81_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass81_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onComplete, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass81_0* New_ctor();

  /// @brief Method <PromptIsMusicDisabled>b__0, addr 0x143abd4, size 0xa4, virtual false, abstract: false, final false
  inline void _PromptIsMusicDisabled_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get_onComplete() const;

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  /// @brief Method .ctor, addr 0x1439cf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass81_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass81_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass81_0(__SettingsManager____c__DisplayClass81_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass81_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass81_0(__SettingsManager____c__DisplayClass81_0 const&) = delete;

  /// @brief Field onComplete, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* ___onComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass81_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass81_0, ___onComplete) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass82_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass82_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass82_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onComplete, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete;

  static inline ::GlobalNamespace::__SettingsManager____c__DisplayClass82_0* New_ctor();

  /// @brief Method <PromptAllowGriefProtection>b__0, addr 0x143ac78, size 0xa4, virtual false, abstract: false, final false
  inline void _PromptAllowGriefProtection_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const& __cordl_internal_get_onComplete() const;

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value);

  /// @brief Method .ctor, addr 0x1439e70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass82_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass82_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass82_0(__SettingsManager____c__DisplayClass82_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass82_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass82_0(__SettingsManager____c__DisplayClass82_0 const&) = delete;

  /// @brief Field onComplete, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* ___onComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsManager____c__DisplayClass82_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsManager____c__DisplayClass82_0, ___onComplete) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager*
class CORDL_TYPE SettingsManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::SettingsManager>> {
public:
  // Declarations
  using OnBooleanSettingChanged = ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged;

  using OnSettingsPromptComplete = ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete;

  using __c = ::GlobalNamespace::__SettingsManager____c;

  using __c__DisplayClass75_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0;

  using __c__DisplayClass77_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0;

  using __c__DisplayClass78_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass78_0;

  using __c__DisplayClass79_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0;

  using __c__DisplayClass80_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass80_0;

  using __c__DisplayClass81_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass81_0;

  using __c__DisplayClass82_0 = ::GlobalNamespace::__SettingsManager____c__DisplayClass82_0;

  /// @brief Field <allowGriefProtection>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__allowGriefProtection_k__BackingField, put = setStaticF__allowGriefProtection_k__BackingField)) bool _allowGriefProtection_k__BackingField;

  /// @brief Field <doesLeftJoystickAllowRolling>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__doesLeftJoystickAllowRolling_k__BackingField,
                             put = setStaticF__doesLeftJoystickAllowRolling_k__BackingField)) bool _doesLeftJoystickAllowRolling_k__BackingField;

  /// @brief Field <doesLeftJoystickAllowTurning>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__doesLeftJoystickAllowTurning_k__BackingField,
                             put = setStaticF__doesLeftJoystickAllowTurning_k__BackingField)) bool _doesLeftJoystickAllowTurning_k__BackingField;

  /// @brief Field <doesRightJoystickAllowRolling>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__doesRightJoystickAllowRolling_k__BackingField,
                             put = setStaticF__doesRightJoystickAllowRolling_k__BackingField)) bool _doesRightJoystickAllowRolling_k__BackingField;

  /// @brief Field <doesRightJoystickAllowTurning>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__doesRightJoystickAllowTurning_k__BackingField,
                             put = setStaticF__doesRightJoystickAllowTurning_k__BackingField)) bool _doesRightJoystickAllowTurning_k__BackingField;

  /// @brief Field <isInitialized>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isInitialized_k__BackingField, put = setStaticF__isInitialized_k__BackingField)) bool _isInitialized_k__BackingField;

  /// @brief Field <isLeftHanded>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isLeftHanded_k__BackingField, put = setStaticF__isLeftHanded_k__BackingField)) bool _isLeftHanded_k__BackingField;

  /// @brief Field <isMusicDisabled>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isMusicDisabled_k__BackingField, put = setStaticF__isMusicDisabled_k__BackingField)) bool _isMusicDisabled_k__BackingField;

  /// @brief Field <isSmoothTurning>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isSmoothTurning_k__BackingField, put = setStaticF__isSmoothTurning_k__BackingField)) bool _isSmoothTurning_k__BackingField;

  /// @brief Field canLaunchSettings, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_canLaunchSettings, put = setStaticF_canLaunchSettings)) bool canLaunchSettings;

  /// @brief Field onAllowGriefProtectionChangedCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onAllowGriefProtectionChangedCallbacks,
                      put = __cordl_internal_set_onAllowGriefProtectionChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onAllowGriefProtectionChangedCallbacks;

  /// @brief Field onDoesLeftJoystickAllowRollingChangedCallbacks, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onDoesLeftJoystickAllowRollingChangedCallbacks,
               put = __cordl_internal_set_onDoesLeftJoystickAllowRollingChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onDoesLeftJoystickAllowRollingChangedCallbacks;

  /// @brief Field onDoesLeftJoystickAllowTurningChangedCallbacks, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onDoesLeftJoystickAllowTurningChangedCallbacks,
               put = __cordl_internal_set_onDoesLeftJoystickAllowTurningChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onDoesLeftJoystickAllowTurningChangedCallbacks;

  /// @brief Field onDoesRightJoystickAllowRollingChangedCallbacks, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onDoesRightJoystickAllowRollingChangedCallbacks,
      put = __cordl_internal_set_onDoesRightJoystickAllowRollingChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onDoesRightJoystickAllowRollingChangedCallbacks;

  /// @brief Field onDoesRightJoystickAllowTurningChangedCallbacks, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onDoesRightJoystickAllowTurningChangedCallbacks,
      put = __cordl_internal_set_onDoesRightJoystickAllowTurningChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onDoesRightJoystickAllowTurningChangedCallbacks;

  /// @brief Field onIsLeftHandedChangedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsLeftHandedChangedCallbacks,
                      put = __cordl_internal_set_onIsLeftHandedChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onIsLeftHandedChangedCallbacks;

  /// @brief Field onIsMusicDisabledChangedCallbacks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsMusicDisabledChangedCallbacks,
                      put = __cordl_internal_set_onIsMusicDisabledChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onIsMusicDisabledChangedCallbacks;

  /// @brief Field onIsSmoothTurningChangedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsSmoothTurningChangedCallbacks,
                      put = __cordl_internal_set_onIsSmoothTurningChangedCallbacks))::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* onIsSmoothTurningChangedCallbacks;

  /// @brief Method Awake, addr 0x14372f4, size 0xa4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GenerateBooleanSettingStateText, addr 0x1438ee0, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GenerateBooleanSettingStateText(bool value);

  /// @brief Method GenerateLeftRightSettingStateText, addr 0x1438f48, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GenerateLeftRightSettingStateText(bool leftValue, bool rightValue);

  /// @brief Method GenerateSettingPromptPostfix, addr 0x14396c8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::StringW GenerateSettingPromptPostfix(int32_t curSettingIndex, int32_t totalSettingCount);

  /// @brief Method GetBool, addr 0x1437768, size 0x20, virtual false, abstract: false, final false
  static inline bool GetBool(::StringW key, bool defaultValue);

  /// @brief Method GetSettingsStateText, addr 0x1438b44, size 0x39c, virtual false, abstract: false, final false
  static inline ::StringW GetSettingsStateText();

  /// @brief Method InitializeSettings, addr 0x1437398, size 0x3d0, virtual false, abstract: false, final false
  static inline void InitializeSettings();

  /// @brief Method LaunchChangeSettings, addr 0x14391e0, size 0x134, virtual false, abstract: false, final false
  static inline void LaunchChangeSettings();

  static inline ::GlobalNamespace::SettingsManager* New_ctor();

  /// @brief Method PromptAllowGriefProtection, addr 0x1439d00, size 0x170, virtual false, abstract: false, final false
  static inline int32_t PromptAllowGriefProtection(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete);

  /// @brief Method PromptAllowJoystickRolling, addr 0x14399f8, size 0x180, virtual false, abstract: false, final false
  static inline int32_t PromptAllowJoystickRolling(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete);

  /// @brief Method PromptAllowJoystickTurning, addr 0x1439548, size 0x178, virtual false, abstract: false, final false
  static inline int32_t PromptAllowJoystickTurning(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete);

  /// @brief Method PromptIsMusicDisabled, addr 0x1439b88, size 0x170, virtual false, abstract: false, final false
  static inline int32_t PromptIsMusicDisabled(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete);

  /// @brief Method PromptIsSmoothTurning, addr 0x1439880, size 0x170, virtual false, abstract: false, final false
  static inline int32_t PromptIsSmoothTurning(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete);

  /// @brief Method PromptLeftHandedMode, addr 0x14393d8, size 0x170, virtual false, abstract: false, final false
  static inline int32_t PromptLeftHandedMode(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete);

  /// @brief Method SetAllowGriefProtection, addr 0x14388f0, size 0x254, virtual false, abstract: false, final false
  static inline void SetAllowGriefProtection(bool newValue);

  /// @brief Method SetBool, addr 0x14379dc, size 0xc, virtual false, abstract: false, final false
  static inline void SetBool(::StringW key, bool value);

  /// @brief Method SetDoesLeftJoystickAllowRolling, addr 0x14380e4, size 0x2dc, virtual false, abstract: false, final false
  static inline void SetDoesLeftJoystickAllowRolling(bool newValue, bool allowPrompt);

  /// @brief Method SetDoesLeftJoystickAllowTurning, addr 0x14379e8, size 0x254, virtual false, abstract: false, final false
  static inline void SetDoesLeftJoystickAllowTurning(bool newValue);

  /// @brief Method SetDoesRightJoystickAllowRolling, addr 0x14383c0, size 0x2dc, virtual false, abstract: false, final false
  static inline void SetDoesRightJoystickAllowRolling(bool newValue, bool allowPrompt);

  /// @brief Method SetDoesRightJoystickAllowTurning, addr 0x1437c3c, size 0x254, virtual false, abstract: false, final false
  static inline void SetDoesRightJoystickAllowTurning(bool newValue);

  /// @brief Method SetIsLeftHanded, addr 0x1437788, size 0x254, virtual false, abstract: false, final false
  static inline void SetIsLeftHanded(bool newValue);

  /// @brief Method SetIsMusicDisabled, addr 0x143869c, size 0x254, virtual false, abstract: false, final false
  static inline void SetIsMusicDisabled(bool newValue);

  /// @brief Method SetIsSmoothTurning, addr 0x1437e90, size 0x254, virtual false, abstract: false, final false
  static inline void SetIsSmoothTurning(bool newValue);

  /// @brief Method TryLaunchSettings, addr 0x1438ff8, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryLaunchSettings();

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onAllowGriefProtectionChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onAllowGriefProtectionChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onDoesLeftJoystickAllowRollingChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onDoesLeftJoystickAllowRollingChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onDoesLeftJoystickAllowTurningChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onDoesLeftJoystickAllowTurningChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onDoesRightJoystickAllowRollingChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onDoesRightJoystickAllowRollingChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onDoesRightJoystickAllowTurningChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onDoesRightJoystickAllowTurningChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onIsLeftHandedChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onIsLeftHandedChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onIsMusicDisabledChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onIsMusicDisabledChangedCallbacks() const;

  constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& __cordl_internal_get_onIsSmoothTurningChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const& __cordl_internal_get_onIsSmoothTurningChangedCallbacks() const;

  constexpr void __cordl_internal_set_onAllowGriefProtectionChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onDoesLeftJoystickAllowRollingChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onDoesLeftJoystickAllowTurningChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onDoesRightJoystickAllowRollingChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onDoesRightJoystickAllowTurningChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onIsLeftHandedChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onIsMusicDisabledChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  constexpr void __cordl_internal_set_onIsSmoothTurningChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value);

  /// @brief Method .ctor, addr 0x1439e78, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__allowGriefProtection_k__BackingField();

  static inline bool getStaticF__doesLeftJoystickAllowRolling_k__BackingField();

  static inline bool getStaticF__doesLeftJoystickAllowTurning_k__BackingField();

  static inline bool getStaticF__doesRightJoystickAllowRolling_k__BackingField();

  static inline bool getStaticF__doesRightJoystickAllowTurning_k__BackingField();

  static inline bool getStaticF__isInitialized_k__BackingField();

  static inline bool getStaticF__isLeftHanded_k__BackingField();

  static inline bool getStaticF__isMusicDisabled_k__BackingField();

  static inline bool getStaticF__isSmoothTurning_k__BackingField();

  static inline bool getStaticF_canLaunchSettings();

  /// @brief Method get_allowGriefProtection, addr 0x1437240, size 0x58, virtual false, abstract: false, final false
  static inline bool get_allowGriefProtection();

  /// @brief Method get_allowJoystickRolling, addr 0x1436f40, size 0xe4, virtual false, abstract: false, final false
  static inline bool get_allowJoystickRolling();

  /// @brief Method get_allowJoystickTurning, addr 0x1436c40, size 0xe4, virtual false, abstract: false, final false
  static inline bool get_allowJoystickTurning();

  /// @brief Method get_doesLeftJoystickAllowRolling, addr 0x1437024, size 0x58, virtual false, abstract: false, final false
  static inline bool get_doesLeftJoystickAllowRolling();

  /// @brief Method get_doesLeftJoystickAllowTurning, addr 0x1436d24, size 0x58, virtual false, abstract: false, final false
  static inline bool get_doesLeftJoystickAllowTurning();

  /// @brief Method get_doesRightJoystickAllowRolling, addr 0x14370d8, size 0x58, virtual false, abstract: false, final false
  static inline bool get_doesRightJoystickAllowRolling();

  /// @brief Method get_doesRightJoystickAllowTurning, addr 0x1436dd8, size 0x58, virtual false, abstract: false, final false
  static inline bool get_doesRightJoystickAllowTurning();

  /// @brief Method get_isInitialized, addr 0x1436ad8, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isInitialized();

  /// @brief Method get_isLeftHanded, addr 0x1436b8c, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isLeftHanded();

  /// @brief Method get_isMusicDisabled, addr 0x143718c, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isMusicDisabled();

  /// @brief Method get_isSmoothTurning, addr 0x1436e8c, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isSmoothTurning();

  static inline void setStaticF__allowGriefProtection_k__BackingField(bool value);

  static inline void setStaticF__doesLeftJoystickAllowRolling_k__BackingField(bool value);

  static inline void setStaticF__doesLeftJoystickAllowTurning_k__BackingField(bool value);

  static inline void setStaticF__doesRightJoystickAllowRolling_k__BackingField(bool value);

  static inline void setStaticF__doesRightJoystickAllowTurning_k__BackingField(bool value);

  static inline void setStaticF__isInitialized_k__BackingField(bool value);

  static inline void setStaticF__isLeftHanded_k__BackingField(bool value);

  static inline void setStaticF__isMusicDisabled_k__BackingField(bool value);

  static inline void setStaticF__isSmoothTurning_k__BackingField(bool value);

  static inline void setStaticF_canLaunchSettings(bool value);

  /// @brief Method set_allowGriefProtection, addr 0x1437298, size 0x5c, virtual false, abstract: false, final false
  static inline void set_allowGriefProtection(bool value);

  /// @brief Method set_doesLeftJoystickAllowRolling, addr 0x143707c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_doesLeftJoystickAllowRolling(bool value);

  /// @brief Method set_doesLeftJoystickAllowTurning, addr 0x1436d7c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_doesLeftJoystickAllowTurning(bool value);

  /// @brief Method set_doesRightJoystickAllowRolling, addr 0x1437130, size 0x5c, virtual false, abstract: false, final false
  static inline void set_doesRightJoystickAllowRolling(bool value);

  /// @brief Method set_doesRightJoystickAllowTurning, addr 0x1436e30, size 0x5c, virtual false, abstract: false, final false
  static inline void set_doesRightJoystickAllowTurning(bool value);

  /// @brief Method set_isInitialized, addr 0x1436b30, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isInitialized(bool value);

  /// @brief Method set_isLeftHanded, addr 0x1436be4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isLeftHanded(bool value);

  /// @brief Method set_isMusicDisabled, addr 0x14371e4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isMusicDisabled(bool value);

  /// @brief Method set_isSmoothTurning, addr 0x1436ee4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isSmoothTurning(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsManager(SettingsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsManager(SettingsManager const&) = delete;

  /// @brief Field onIsLeftHandedChangedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onIsLeftHandedChangedCallbacks;

  /// @brief Field onDoesLeftJoystickAllowTurningChangedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onDoesLeftJoystickAllowTurningChangedCallbacks;

  /// @brief Field onDoesRightJoystickAllowTurningChangedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onDoesRightJoystickAllowTurningChangedCallbacks;

  /// @brief Field onIsSmoothTurningChangedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onIsSmoothTurningChangedCallbacks;

  /// @brief Field onDoesLeftJoystickAllowRollingChangedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onDoesLeftJoystickAllowRollingChangedCallbacks;

  /// @brief Field onDoesRightJoystickAllowRollingChangedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onDoesRightJoystickAllowRollingChangedCallbacks;

  /// @brief Field onIsMusicDisabledChangedCallbacks, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onIsMusicDisabledChangedCallbacks;

  /// @brief Field onAllowGriefProtectionChangedCallbacks, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* ___onAllowGriefProtectionChangedCallbacks;

  /// @brief Field allowGriefProtectionKey offset 0xffffffff size 0x8
  static constexpr ::ConstString allowGriefProtectionKey{ u"allowGriefProtection" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Settings: " };

  /// @brief Field doesLeftJoystickAllowRollingKey offset 0xffffffff size 0x8
  static constexpr ::ConstString doesLeftJoystickAllowRollingKey{ u"doesLeftJoystickAllowRolling" };

  /// @brief Field doesLeftJoystickAllowTurningKey offset 0xffffffff size 0x8
  static constexpr ::ConstString doesLeftJoystickAllowTurningKey{ u"doesLeftJoystickAllowTurning" };

  /// @brief Field doesRightJoystickAllowRollingKey offset 0xffffffff size 0x8
  static constexpr ::ConstString doesRightJoystickAllowRollingKey{ u"doesRightJoystickAllowRolling" };

  /// @brief Field doesRightJoystickAllowTurningKey offset 0xffffffff size 0x8
  static constexpr ::ConstString doesRightJoystickAllowTurningKey{ u"doesRightJoystickAllowTurning" };

  /// @brief Field isLeftHandedKey offset 0xffffffff size 0x8
  static constexpr ::ConstString isLeftHandedKey{ u"isLeftHanded" };

  /// @brief Field isMusicDisabledKey offset 0xffffffff size 0x8
  static constexpr ::ConstString isMusicDisabledKey{ u"isMusicDisabled" };

  /// @brief Field isSmoothTurningKey offset 0xffffffff size 0x8
  static constexpr ::ConstString isSmoothTurningKey{ u"isSmoothTurning" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onIsLeftHandedChangedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onDoesLeftJoystickAllowTurningChangedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onDoesRightJoystickAllowTurningChangedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onIsSmoothTurningChangedCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onDoesLeftJoystickAllowRollingChangedCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onDoesRightJoystickAllowRollingChangedCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onIsMusicDisabledChangedCallbacks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___onAllowGriefProtectionChangedCallbacks) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsManager*, "", "SettingsManager");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*, "", "SettingsManager/OnBooleanSettingChanged");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*, "", "SettingsManager/OnSettingsPromptComplete");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c*, "", "SettingsManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*, "", "SettingsManager/<>c__DisplayClass75_0");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*, "", "SettingsManager/<>c__DisplayClass77_0");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass78_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass78_0*, "", "SettingsManager/<>c__DisplayClass78_0");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*, "", "SettingsManager/<>c__DisplayClass79_0");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass80_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass80_0*, "", "SettingsManager/<>c__DisplayClass80_0");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass81_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass81_0*, "", "SettingsManager/<>c__DisplayClass81_0");
NEED_NO_BOX(::GlobalNamespace::__SettingsManager____c__DisplayClass82_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsManager____c__DisplayClass82_0*, "", "SettingsManager/<>c__DisplayClass82_0");
