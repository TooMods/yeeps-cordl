#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GlobalRotation_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsStoreInstance)
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
class __CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated;
}
namespace GlobalNamespace {
class __CosmeticsStoreInstance__OnStoreRotationUpdated;
}
namespace GlobalNamespace {
class __CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated;
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
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsStoreInstance;
}
namespace GlobalNamespace {
class __CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated;
}
namespace GlobalNamespace {
class __CosmeticsStoreInstance__OnStoreRotationUpdated;
}
namespace GlobalNamespace {
class __CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsStoreInstance);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated);
// Type: ::OnStoreRotationUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStoreInstance::OnStoreRotationUpdated*
class CORDL_TYPE __CosmeticsStoreInstance__OnStoreRotationUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x27684fc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GlobalRotation newStoreRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2768588, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x27684c0, size 0x3c, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::GlobalRotation newStoreRotation);

  static inline ::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27661b4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsStoreInstance__OnStoreRotationUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsStoreInstance__OnStoreRotationUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsStoreInstance__OnStoreRotationUpdated(__CosmeticsStoreInstance__OnStoreRotationUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsStoreInstance__OnStoreRotationUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsStoreInstance__OnStoreRotationUpdated(__CosmeticsStoreInstance__OnStoreRotationUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHasTimeUntilNextRotationUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStoreInstance::OnHasTimeUntilNextRotationUpdated*
class CORDL_TYPE __CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2768670, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasTimeUntilNextRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27686f8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2768658, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasTimeUntilNextRotation);

  static inline ::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2768594, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated(__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated(__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTimeUntilNextRotationUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStoreInstance::OnTimeUntilNextRotationUpdated*
class CORDL_TYPE __CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x27687dc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::TimeSpan newTimeUntilNextRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2768860, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x27687c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::TimeSpan newTimeUntilNextRotation);

  static inline ::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2768704, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated(__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated(__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticsStoreInstance
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStoreInstance*
class CORDL_TYPE CosmeticsStoreInstance : public ::System::Object {
public:
  // Declarations
  using OnHasTimeUntilNextRotationUpdated = ::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated;

  using OnStoreRotationUpdated = ::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated;

  using OnTimeUntilNextRotationUpdated = ::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated;

  /// @brief Field <globalRotationKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__globalRotationKey_k__BackingField, put = __cordl_internal_set__globalRotationKey_k__BackingField))::StringW _globalRotationKey_k__BackingField;

  /// @brief Field <hasStoreRotation>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hasStoreRotation_k__BackingField, put = __cordl_internal_set__hasStoreRotation_k__BackingField)) bool _hasStoreRotation_k__BackingField;

  /// @brief Field <hasTimeUntilNextRotation>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__hasTimeUntilNextRotation_k__BackingField,
                      put = __cordl_internal_set__hasTimeUntilNextRotation_k__BackingField)) bool _hasTimeUntilNextRotation_k__BackingField;

  /// @brief Field <storeRotation>k__BackingField, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get__storeRotation_k__BackingField,
                      put = __cordl_internal_set__storeRotation_k__BackingField))::GlobalNamespace::GlobalRotation _storeRotation_k__BackingField;

  /// @brief Field <timeUntilNextRotation>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__timeUntilNextRotation_k__BackingField,
                      put = __cordl_internal_set__timeUntilNextRotation_k__BackingField))::System::TimeSpan _timeUntilNextRotation_k__BackingField;

  __declspec(property(get = get_globalRotationKey, put = set_globalRotationKey))::StringW globalRotationKey;

  __declspec(property(get = get_hasStoreRotation, put = set_hasStoreRotation)) bool hasStoreRotation;

  __declspec(property(get = get_hasTimeUntilNextRotation, put = set_hasTimeUntilNextRotation)) bool hasTimeUntilNextRotation;

  /// @brief Field isFetchingStoreRotation, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_isFetchingStoreRotation, put = __cordl_internal_set_isFetchingStoreRotation)) bool isFetchingStoreRotation;

  /// @brief Field onHasTimeUntilNextRotationUpdatedCallbacks, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks,
      put = __cordl_internal_set_onHasTimeUntilNextRotationUpdatedCallbacks))::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated* onHasTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Field onStoreRotationUpdatedCallbacks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onStoreRotationUpdatedCallbacks,
                      put = __cordl_internal_set_onStoreRotationUpdatedCallbacks))::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated* onStoreRotationUpdatedCallbacks;

  /// @brief Field onTimeUntilNextRotationUpdatedCallbacks, offset 0x68, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks,
               put = __cordl_internal_set_onTimeUntilNextRotationUpdatedCallbacks))::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated* onTimeUntilNextRotationUpdatedCallbacks;

  __declspec(property(get = get_storeRotation, put = set_storeRotation))::GlobalNamespace::GlobalRotation storeRotation;

  __declspec(property(get = get_timeUntilNextRotation, put = set_timeUntilNextRotation))::System::TimeSpan timeUntilNextRotation;

  /// @brief Method DoTimeUntilNextRotationUpdate, addr 0x2768240, size 0x280, virtual false, abstract: false, final false
  inline void DoTimeUntilNextRotationUpdate();

  static inline ::GlobalNamespace::CosmeticsStoreInstance* New_ctor(::StringW globalRotationKey);

  /// @brief Method OnFetchGlobalRotationFailure, addr 0x2767f84, size 0x138, virtual false, abstract: false, final false
  inline void OnFetchGlobalRotationFailure(::StringW errorType);

  /// @brief Method OnFetchGlobalRotationSuccess, addr 0x2767e6c, size 0x118, virtual false, abstract: false, final false
  inline void OnFetchGlobalRotationSuccess(::GlobalNamespace::GlobalRotation globalRotation);

  /// @brief Method RefreshStoreRotation, addr 0x2767b1c, size 0x180, virtual false, abstract: false, final false
  inline void RefreshStoreRotation();

  /// @brief Method SetHasTimeUntilNextRotation, addr 0x27680bc, size 0x184, virtual false, abstract: false, final false
  inline void SetHasTimeUntilNextRotation(bool newHasTimeUntilNextRotation);

  /// @brief Method SetStoreRotation, addr 0x2767c9c, size 0x1d0, virtual false, abstract: false, final false
  inline void SetStoreRotation(::GlobalNamespace::GlobalRotation newStoreRotation);

  constexpr ::StringW const& __cordl_internal_get__globalRotationKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__globalRotationKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasStoreRotation_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasStoreRotation_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasTimeUntilNextRotation_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasTimeUntilNextRotation_k__BackingField();

  constexpr ::GlobalNamespace::GlobalRotation const& __cordl_internal_get__storeRotation_k__BackingField() const;

  constexpr ::GlobalNamespace::GlobalRotation& __cordl_internal_get__storeRotation_k__BackingField();

  constexpr ::System::TimeSpan const& __cordl_internal_get__timeUntilNextRotation_k__BackingField() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__timeUntilNextRotation_k__BackingField();

  constexpr bool const& __cordl_internal_get_isFetchingStoreRotation() const;

  constexpr bool& __cordl_internal_get_isFetchingStoreRotation();

  constexpr ::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated*& __cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated*> const&
  __cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated*& __cordl_internal_get_onStoreRotationUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated*> const& __cordl_internal_get_onStoreRotationUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated*& __cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated*> const&
  __cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks() const;

  constexpr void __cordl_internal_set__globalRotationKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__hasStoreRotation_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasTimeUntilNextRotation_k__BackingField(bool value);

  constexpr void __cordl_internal_set__storeRotation_k__BackingField(::GlobalNamespace::GlobalRotation value);

  constexpr void __cordl_internal_set__timeUntilNextRotation_k__BackingField(::System::TimeSpan value);

  constexpr void __cordl_internal_set_isFetchingStoreRotation(bool value);

  constexpr void __cordl_internal_set_onHasTimeUntilNextRotationUpdatedCallbacks(::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated* value);

  constexpr void __cordl_internal_set_onStoreRotationUpdatedCallbacks(::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated* value);

  constexpr void __cordl_internal_set_onTimeUntilNextRotationUpdatedCallbacks(::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated* value);

  /// @brief Method .ctor, addr 0x27679b0, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::StringW globalRotationKey);

  /// @brief Method get_globalRotationKey, addr 0x2767938, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_globalRotationKey();

  /// @brief Method get_hasStoreRotation, addr 0x2767978, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasStoreRotation();

  /// @brief Method get_hasTimeUntilNextRotation, addr 0x276798c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasTimeUntilNextRotation();

  /// @brief Method get_storeRotation, addr 0x2767948, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GlobalRotation get_storeRotation();

  /// @brief Method get_timeUntilNextRotation, addr 0x27679a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_timeUntilNextRotation();

  /// @brief Method set_globalRotationKey, addr 0x2767940, size 0x8, virtual false, abstract: false, final false
  inline void set_globalRotationKey(::StringW value);

  /// @brief Method set_hasStoreRotation, addr 0x2767980, size 0xc, virtual false, abstract: false, final false
  inline void set_hasStoreRotation(bool value);

  /// @brief Method set_hasTimeUntilNextRotation, addr 0x2767994, size 0xc, virtual false, abstract: false, final false
  inline void set_hasTimeUntilNextRotation(bool value);

  /// @brief Method set_storeRotation, addr 0x2767960, size 0x18, virtual false, abstract: false, final false
  inline void set_storeRotation(::GlobalNamespace::GlobalRotation value);

  /// @brief Method set_timeUntilNextRotation, addr 0x27679a8, size 0x8, virtual false, abstract: false, final false
  inline void set_timeUntilNextRotation(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsStoreInstance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStoreInstance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsStoreInstance(CosmeticsStoreInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStoreInstance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsStoreInstance(CosmeticsStoreInstance const&) = delete;

  /// @brief Field <globalRotationKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____globalRotationKey_k__BackingField;

  /// @brief Field <storeRotation>k__BackingField, offset: 0x18, size: 0x28, def value: None
  ::GlobalNamespace::GlobalRotation ____storeRotation_k__BackingField;

  /// @brief Field <hasStoreRotation>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____hasStoreRotation_k__BackingField;

  /// @brief Field isFetchingStoreRotation, offset: 0x41, size: 0x1, def value: None
  bool ___isFetchingStoreRotation;

  /// @brief Field onStoreRotationUpdatedCallbacks, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated* ___onStoreRotationUpdatedCallbacks;

  /// @brief Field <hasTimeUntilNextRotation>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____hasTimeUntilNextRotation_k__BackingField;

  /// @brief Field onHasTimeUntilNextRotationUpdatedCallbacks, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated* ___onHasTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Field <timeUntilNextRotation>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::TimeSpan ____timeUntilNextRotation_k__BackingField;

  /// @brief Field onTimeUntilNextRotationUpdatedCallbacks, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated* ___onTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Cosmetics Store Instance: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsStoreInstance, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ____globalRotationKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ____storeRotation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ____hasStoreRotation_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ___isFetchingStoreRotation) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ___onStoreRotationUpdatedCallbacks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ____hasTimeUntilNextRotation_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ___onHasTimeUntilNextRotationUpdatedCallbacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ____timeUntilNextRotation_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreInstance, ___onTimeUntilNextRotationUpdatedCallbacks) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsStoreInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsStoreInstance*, "", "CosmeticsStoreInstance");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsStoreInstance__OnHasTimeUntilNextRotationUpdated*, "", "CosmeticsStoreInstance/OnHasTimeUntilNextRotationUpdated");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsStoreInstance__OnStoreRotationUpdated*, "", "CosmeticsStoreInstance/OnStoreRotationUpdated");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsStoreInstance__OnTimeUntilNextRotationUpdated*, "", "CosmeticsStoreInstance/OnTimeUntilNextRotationUpdated");
