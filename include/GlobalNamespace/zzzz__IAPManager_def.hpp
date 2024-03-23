#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IAPManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IAPManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct __IAPManager__CurrencyPurchaseData;
}
namespace GlobalNamespace {
class __IAPManager__OnPurchaseFailure;
}
namespace GlobalNamespace {
class __IAPManager__OnPurchaseSuccess;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass17_0;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass9_0;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class IAPManager;
}
namespace GlobalNamespace {
class __IAPManager__OnPurchaseFailure;
}
namespace GlobalNamespace {
class __IAPManager__OnPurchaseSuccess;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass17_0;
}
namespace GlobalNamespace {
class __IAPManager____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __IAPManager__CurrencyPurchaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAPManager);
MARK_REF_PTR_T(::GlobalNamespace::__IAPManager__OnPurchaseFailure);
MARK_REF_PTR_T(::GlobalNamespace::__IAPManager__OnPurchaseSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__IAPManager____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__IAPManager____c__DisplayClass16_0);
MARK_REF_PTR_T(::GlobalNamespace::__IAPManager____c__DisplayClass17_0);
MARK_REF_PTR_T(::GlobalNamespace::__IAPManager____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__IAPManager__CurrencyPurchaseData);
// Type: ::CurrencyPurchaseData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IAPManager::CurrencyPurchaseData
struct CORDL_TYPE __IAPManager__CurrencyPurchaseData {
public:
  // Declarations
  /// @brief Method GetDollarDisplayString, addr 0x29d5534, size 0x98, virtual false, abstract: false, final false
  inline ::StringW GetDollarDisplayString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager__CurrencyPurchaseData();

  // Ctor Parameters [CppParam { name: "metaIAPKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currencyAmount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "centAmount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IAPManager__CurrencyPurchaseData(::StringW metaIAPKey, int32_t currencyAmount, int32_t centAmount) noexcept;

  /// @brief Field metaIAPKey, offset: 0x0, size: 0x8, def value: None
  ::StringW metaIAPKey;

  /// @brief Field currencyAmount, offset: 0x8, size: 0x4, def value: None
  int32_t currencyAmount;

  /// @brief Field centAmount, offset: 0xc, size: 0x4, def value: None
  int32_t centAmount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager__CurrencyPurchaseData, metaIAPKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager__CurrencyPurchaseData, currencyAmount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager__CurrencyPurchaseData, centAmount) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPurchaseSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager::OnPurchaseSuccess*
class CORDL_TYPE __IAPManager__OnPurchaseSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d55e0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t amountAdded, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d5664, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d55cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t amountAdded);

  static inline ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d4c34, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager__OnPurchaseSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager__OnPurchaseSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IAPManager__OnPurchaseSuccess(__IAPManager__OnPurchaseSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager__OnPurchaseSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IAPManager__OnPurchaseSuccess(__IAPManager__OnPurchaseSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager__OnPurchaseSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPurchaseFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager::OnPurchaseFailure*
class CORDL_TYPE __IAPManager__OnPurchaseFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d5684, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d56a4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d5670, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__IAPManager__OnPurchaseFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d4cf8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager__OnPurchaseFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager__OnPurchaseFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IAPManager__OnPurchaseFailure(__IAPManager__OnPurchaseFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager__OnPurchaseFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IAPManager__OnPurchaseFailure(__IAPManager__OnPurchaseFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager__OnPurchaseFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager::<>c__DisplayClass9_0*
class CORDL_TYPE __IAPManager____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onFailure, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure;

  /// @brief Field onSuccess, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess;

  static inline ::GlobalNamespace::__IAPManager____c__DisplayClass9_0* New_ctor();

  /// @brief Method <LaunchPurchase>b__0, addr 0x29d56b0, size 0x210, virtual false, abstract: false, final false
  inline void _LaunchPurchase_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* message);

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value);

  /// @brief Method .ctor, addr 0x29d4c24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IAPManager____c__DisplayClass9_0(__IAPManager____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IAPManager____c__DisplayClass9_0(__IAPManager____c__DisplayClass9_0 const&) = delete;

  /// @brief Field onFailure, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseFailure* ___onFailure;

  /// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* ___onSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager____c__DisplayClass9_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass9_0, ___onFailure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass9_0, ___onSuccess) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager::<>c__DisplayClass13_0*
class CORDL_TYPE __IAPManager____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field IAPKeys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_IAPKeys, put = __cordl_internal_set_IAPKeys))::System::Collections::Generic::List_1<::StringW>* IAPKeys;

  /// @brief Field onIndividualSuccess, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onIndividualSuccess, put = __cordl_internal_set_onIndividualSuccess))::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onIndividualSuccess;

  static inline ::GlobalNamespace::__IAPManager____c__DisplayClass13_0* New_ctor();

  /// @brief Method <ProcessIAPs>b__0, addr 0x29d58c0, size 0xfc, virtual false, abstract: false, final false
  inline void _ProcessIAPs_b__0(int32_t amountAdded);

  /// @brief Method <ProcessIAPs>b__1, addr 0x29d59bc, size 0x8, virtual false, abstract: false, final false
  inline void _ProcessIAPs_b__1();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_IAPKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_IAPKeys() const;

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& __cordl_internal_get_onIndividualSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& __cordl_internal_get_onIndividualSuccess() const;

  constexpr void __cordl_internal_set_IAPKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_onIndividualSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value);

  /// @brief Method .ctor, addr 0x29d4c2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IAPManager____c__DisplayClass13_0(__IAPManager____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IAPManager____c__DisplayClass13_0(__IAPManager____c__DisplayClass13_0 const&) = delete;

  /// @brief Field onIndividualSuccess, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* ___onIndividualSuccess;

  /// @brief Field IAPKeys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___IAPKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager____c__DisplayClass13_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass13_0, ___onIndividualSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass13_0, ___IAPKeys) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager::<>c__DisplayClass16_0*
class CORDL_TYPE __IAPManager____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field accountData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  /// @brief Field currencyPurchaseData, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_currencyPurchaseData, put = __cordl_internal_set_currencyPurchaseData))::GlobalNamespace::__IAPManager__CurrencyPurchaseData currencyPurchaseData;

  /// @brief Field onFailure, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure;

  /// @brief Field onSuccess, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess;

  static inline ::GlobalNamespace::__IAPManager____c__DisplayClass16_0* New_ctor();

  /// @brief Method <ProcessCurrencyIAP>b__0, addr 0x29d59c4, size 0x214, virtual false, abstract: false, final false
  inline void _ProcessCurrencyIAP_b__0(int32_t amountAdded);

  /// @brief Method <ProcessCurrencyIAP>b__1, addr 0x29d5bd8, size 0x1bc, virtual false, abstract: false, final false
  inline void _ProcessCurrencyIAP_b__1(::StringW errorType);

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr ::GlobalNamespace::__IAPManager__CurrencyPurchaseData const& __cordl_internal_get_currencyPurchaseData() const;

  constexpr ::GlobalNamespace::__IAPManager__CurrencyPurchaseData& __cordl_internal_get_currencyPurchaseData();

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  constexpr void __cordl_internal_set_currencyPurchaseData(::GlobalNamespace::__IAPManager__CurrencyPurchaseData value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value);

  /// @brief Method .ctor, addr 0x29d54dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IAPManager____c__DisplayClass16_0(__IAPManager____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IAPManager____c__DisplayClass16_0(__IAPManager____c__DisplayClass16_0 const&) = delete;

  /// @brief Field currencyPurchaseData, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::__IAPManager__CurrencyPurchaseData ___currencyPurchaseData;

  /// @brief Field accountData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseFailure* ___onFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager____c__DisplayClass16_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass16_0, ___currencyPurchaseData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass16_0, ___accountData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass16_0, ___onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass16_0, ___onFailure) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager::<>c__DisplayClass17_0*
class CORDL_TYPE __IAPManager____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field accountData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  /// @brief Field bundleKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bundleKey, put = __cordl_internal_set_bundleKey))::StringW bundleKey;

  /// @brief Field onFailure, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure;

  /// @brief Field onSuccess, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess;

  static inline ::GlobalNamespace::__IAPManager____c__DisplayClass17_0* New_ctor();

  /// @brief Method <ProcessBundleIAP>b__0, addr 0x29d5d94, size 0x2b8, virtual false, abstract: false, final false
  inline void _ProcessBundleIAP_b__0(int32_t currencyAmount, int32_t centCost, ::System::Collections::Generic::List_1<::StringW>* bundleItems);

  /// @brief Method <ProcessBundleIAP>b__1, addr 0x29d604c, size 0x1fc, virtual false, abstract: false, final false
  inline void _ProcessBundleIAP_b__1(::StringW errorType);

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr ::StringW const& __cordl_internal_get_bundleKey() const;

  constexpr ::StringW& __cordl_internal_get_bundleKey();

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  constexpr void __cordl_internal_set_bundleKey(::StringW value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value);

  /// @brief Method .ctor, addr 0x29d54e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IAPManager____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IAPManager____c__DisplayClass17_0(__IAPManager____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IAPManager____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IAPManager____c__DisplayClass17_0(__IAPManager____c__DisplayClass17_0 const&) = delete;

  /// @brief Field bundleKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___bundleKey;

  /// @brief Field accountData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__IAPManager__OnPurchaseFailure* ___onFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IAPManager____c__DisplayClass17_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass17_0, ___bundleKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass17_0, ___accountData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass17_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IAPManager____c__DisplayClass17_0, ___onFailure) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IAPManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAPManager*
class CORDL_TYPE IAPManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::IAPManager>> {
public:
  // Declarations
  using CurrencyPurchaseData = ::GlobalNamespace::__IAPManager__CurrencyPurchaseData;

  using OnPurchaseFailure = ::GlobalNamespace::__IAPManager__OnPurchaseFailure;

  using OnPurchaseSuccess = ::GlobalNamespace::__IAPManager__OnPurchaseSuccess;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__IAPManager____c__DisplayClass13_0;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__IAPManager____c__DisplayClass16_0;

  using __c__DisplayClass17_0 = ::GlobalNamespace::__IAPManager____c__DisplayClass17_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__IAPManager____c__DisplayClass9_0;

  /// @brief Field currencyPurchaseDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyPurchaseDatas,
                      put = __cordl_internal_set_currencyPurchaseDatas))::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData,
                                                                                 ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*> currencyPurchaseDatas;

  /// @brief Field debugPurchasedIAPKeys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_debugPurchasedIAPKeys, put = __cordl_internal_set_debugPurchasedIAPKeys))::System::Collections::Generic::List_1<::StringW>* debugPurchasedIAPKeys;

  /// @brief Field doDebugPurchaseProcessingInEditor, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_doDebugPurchaseProcessingInEditor, put = __cordl_internal_set_doDebugPurchaseProcessingInEditor)) bool doDebugPurchaseProcessingInEditor;

  /// @brief Field isProcessingIAP, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isProcessingIAP, put = setStaticF_isProcessingIAP)) bool isProcessingIAP;

  /// @brief Method LaunchPurchase, addr 0x29d49a0, size 0x284, virtual false, abstract: false, final false
  inline void LaunchPurchase(::StringW IAPKey, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess, ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure);

  static inline ::GlobalNamespace::IAPManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x29d4148, size 0x198, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnGetViewerPurchasesComplete, addr 0x29d42e0, size 0x56c, virtual false, abstract: false, final false
  static inline void OnGetViewerPurchasesComplete(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>* message);

  /// @brief Method OnProcessIndividualComplete, addr 0x29d4e10, size 0x118, virtual false, abstract: false, final false
  static inline void OnProcessIndividualComplete(::System::Collections::Generic::List_1<::StringW>* IAPKeys, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onIndividualSuccess);

  /// @brief Method ProcessBundleIAP, addr 0x29d520c, size 0x2d0, virtual false, abstract: false, final false
  static inline void ProcessBundleIAP(::StringW bundleKey, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess, ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure);

  /// @brief Method ProcessCurrencyIAP, addr 0x29d4f28, size 0x2e4, virtual false, abstract: false, final false
  static inline void ProcessCurrencyIAP(::GlobalNamespace::__IAPManager__CurrencyPurchaseData currencyPurchaseData, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess,
                                        ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure);

  /// @brief Method ProcessIAP, addr 0x29d4db4, size 0x5c, virtual false, abstract: false, final false
  static inline void ProcessIAP(::StringW IAPKey, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess, ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure);

  /// @brief Method ProcessIAPs, addr 0x29d484c, size 0x154, virtual false, abstract: false, final false
  static inline void ProcessIAPs(::System::Collections::Generic::List_1<::StringW>* IAPKeys, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onIndividualSuccess);

  /// @brief Method Start, addr 0x29d4018, size 0x130, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetCurrencyPurchaseData, addr 0x29d3f48, size 0xd0, virtual false, abstract: false, final false
  static inline bool TryGetCurrencyPurchaseData(::StringW metaIAPKey, ByRef<::GlobalNamespace::__IAPManager__CurrencyPurchaseData> currencyPurchaseData);

  constexpr ::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*> const& __cordl_internal_get_currencyPurchaseDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*>& __cordl_internal_get_currencyPurchaseDatas();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_debugPurchasedIAPKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_debugPurchasedIAPKeys() const;

  constexpr bool const& __cordl_internal_get_doDebugPurchaseProcessingInEditor() const;

  constexpr bool& __cordl_internal_get_doDebugPurchaseProcessingInEditor();

  constexpr void __cordl_internal_set_currencyPurchaseDatas(::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*> value);

  constexpr void __cordl_internal_set_debugPurchasedIAPKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_doDebugPurchaseProcessingInEditor(bool value);

  /// @brief Method .ctor, addr 0x29d54ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_isProcessingIAP();

  static inline void setStaticF_isProcessingIAP(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IAPManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IAPManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAPManager(IAPManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAPManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAPManager(IAPManager const&) = delete;

  /// @brief Field currencyPurchaseDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*> ___currencyPurchaseDatas;

  /// @brief Field doDebugPurchaseProcessingInEditor, offset: 0x20, size: 0x1, def value: None
  bool ___doDebugPurchaseProcessingInEditor;

  /// @brief Field debugPurchasedIAPKeys, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___debugPurchasedIAPKeys;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"IAP: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IAPManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IAPManager, ___currencyPurchaseDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IAPManager, ___doDebugPurchaseProcessingInEditor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IAPManager, ___debugPurchasedIAPKeys) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAPManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAPManager*, "", "IAPManager");
NEED_NO_BOX(::GlobalNamespace::__IAPManager__OnPurchaseFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager__OnPurchaseFailure*, "", "IAPManager/OnPurchaseFailure");
NEED_NO_BOX(::GlobalNamespace::__IAPManager__OnPurchaseSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager__OnPurchaseSuccess*, "", "IAPManager/OnPurchaseSuccess");
NEED_NO_BOX(::GlobalNamespace::__IAPManager____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager____c__DisplayClass13_0*, "", "IAPManager/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::__IAPManager____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager____c__DisplayClass16_0*, "", "IAPManager/<>c__DisplayClass16_0");
NEED_NO_BOX(::GlobalNamespace::__IAPManager____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager____c__DisplayClass17_0*, "", "IAPManager/<>c__DisplayClass17_0");
NEED_NO_BOX(::GlobalNamespace::__IAPManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager____c__DisplayClass9_0*, "", "IAPManager/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IAPManager__CurrencyPurchaseData, "", "IAPManager/CurrencyPurchaseData");
