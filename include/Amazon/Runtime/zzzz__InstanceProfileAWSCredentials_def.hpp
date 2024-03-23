#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__URIBasedRefreshingCredentialHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceProfileAWSCredentials)
namespace Amazon::Runtime {
class __InstanceProfileAWSCredentials___GetAvailableRoles_d__14;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityCredentials;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class InstanceProfileAWSCredentials;
}
namespace Amazon::Runtime {
class __InstanceProfileAWSCredentials___GetAvailableRoles_d__14;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::InstanceProfileAWSCredentials);
MARK_REF_PTR_T(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14);
// Type: ::<GetAvailableRoles>d__14
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::InstanceProfileAWSCredentials::<GetAvailableRoles>d__14*
class CORDL_TYPE __InstanceProfileAWSCredentials___GetAvailableRoles_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::StringW __2__current;

  /// @brief Field <>3__proxy, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__proxy, put = __cordl_internal_set___3__proxy))::System::Net::IWebProxy* __3__proxy;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::ArrayW<::StringW, ::Array<::StringW>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field proxy, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_proxy, put = __cordl_internal_set_proxy))::System::Net::IWebProxy* proxy;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1fee2f8, size 0x380, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x1fee854, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x1fee804, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1fee8f8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1fee80c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1fee84c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1fee2f4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get___3__proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get___3__proxy() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get_proxy() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___3__proxy(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_proxy(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x1fedbe0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InstanceProfileAWSCredentials___GetAvailableRoles_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InstanceProfileAWSCredentials___GetAvailableRoles_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InstanceProfileAWSCredentials___GetAvailableRoles_d__14(__InstanceProfileAWSCredentials___GetAvailableRoles_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InstanceProfileAWSCredentials___GetAvailableRoles_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InstanceProfileAWSCredentials___GetAvailableRoles_d__14(__InstanceProfileAWSCredentials___GetAvailableRoles_d__14 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field proxy, offset: 0x28, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___proxy;

  /// @brief Field <>3__proxy, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IWebProxy* _____3__proxy;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, ___proxy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, _____3__proxy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14, _____7__wrap2) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::InstanceProfileAWSCredentials
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::InstanceProfileAWSCredentials*
class CORDL_TYPE InstanceProfileAWSCredentials : public ::Amazon::Runtime::URIBasedRefreshingCredentialHelper {
public:
  // Declarations
  using _GetAvailableRoles_d__14 = ::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14;

  /// @brief Field AliasSeparators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AliasSeparators, put = setStaticF_AliasSeparators))::ArrayW<::StringW, ::Array<::StringW>*> AliasSeparators;

  __declspec(property(get = get_CurrentRoleUri))::System::Uri* CurrentRoleUri;

  /// @brief Field InfoPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InfoPath, put = setStaticF_InfoPath))::StringW InfoPath;

  __declspec(property(get = get_Role, put = set_Role))::StringW Role;

  /// @brief Field RolesPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RolesPath, put = setStaticF_RolesPath))::StringW RolesPath;

  /// @brief Field Server, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Server, put = setStaticF_Server))::StringW Server;

  /// @brief Field <Role>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Role_k__BackingField, put = __cordl_internal_set__Role_k__BackingField))::StringW _Role_k__BackingField;

  /// @brief Field _currentRefreshState, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentRefreshState,
                      put = __cordl_internal_set__currentRefreshState))::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* _currentRefreshState;

  /// @brief Field _preemptExpiryTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__preemptExpiryTime, put = setStaticF__preemptExpiryTime))::System::TimeSpan _preemptExpiryTime;

  /// @brief Field _proxy, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__proxy, put = __cordl_internal_set__proxy))::System::Net::IWebProxy* _proxy;

  /// @brief Field _refreshAttemptPeriod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__refreshAttemptPeriod, put = setStaticF__refreshAttemptPeriod))::System::TimeSpan _refreshAttemptPeriod;

  /// @brief Method CheckIsIMDSEnabled, addr 0x1fedf88, size 0xe8, virtual false, abstract: false, final false
  static inline void CheckIsIMDSEnabled();

  /// @brief Method CreateMetadataTokenHeaders, addr 0x1fee070, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateMetadataTokenHeaders(::StringW token);

  /// @brief Method GenerateNewCredentials, addr 0x1fece00, size 0x474, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  /// @brief Method GetAvailableRoles, addr 0x1fedb18, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetAvailableRoles();

  /// @brief Method GetAvailableRoles, addr 0x1fedb68, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetAvailableRoles(::System::Net::IWebProxy* proxy);

  /// @brief Method GetEarlyRefreshState, addr 0x1fed414, size 0x198, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GetEarlyRefreshState(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* state);

  /// @brief Method GetFirstRole, addr 0x1fee13c, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetFirstRole();

  /// @brief Method GetFirstRole, addr 0x1fed7a8, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW GetFirstRole(::System::Net::IWebProxy* proxy);

  /// @brief Method GetRefreshState, addr 0x1fed274, size 0x1a0, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GetRefreshState(::StringW token);

  /// @brief Method GetRoleCredentials, addr 0x1fedec0, size 0xc8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials* GetRoleCredentials(::StringW token);

  /// @brief Method GetServiceInfo, addr 0x1fede00, size 0xc0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo* GetServiceInfo(::System::Net::IWebProxy* proxy, ::StringW token);

  /// @brief Method IsNullOrWhiteSpace, addr 0x1fed6fc, size 0x34, virtual false, abstract: false, final false
  static inline bool IsNullOrWhiteSpace(::StringW s);

  static inline ::Amazon::Runtime::InstanceProfileAWSCredentials* New_ctor();

  static inline ::Amazon::Runtime::InstanceProfileAWSCredentials* New_ctor(::System::Net::IWebProxy* proxy);

  static inline ::Amazon::Runtime::InstanceProfileAWSCredentials* New_ctor(::StringW role);

  static inline ::Amazon::Runtime::InstanceProfileAWSCredentials* New_ctor(::StringW role, ::System::Net::IWebProxy* proxy);

  constexpr ::StringW const& __cordl_internal_get__Role_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Role_k__BackingField();

  constexpr ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*& __cordl_internal_get__currentRefreshState();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> const& __cordl_internal_get__currentRefreshState() const;

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get__proxy() const;

  constexpr void __cordl_internal_set__Role_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__currentRefreshState(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* value);

  constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x1fed730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1fed738, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IWebProxy* proxy);

  /// @brief Method .ctor, addr 0x1fed5ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW role);

  /// @brief Method .ctor, addr 0x1fed5b4, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::StringW role, ::System::Net::IWebProxy* proxy);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_AliasSeparators();

  static inline ::StringW getStaticF_InfoPath();

  static inline ::StringW getStaticF_RolesPath();

  static inline ::StringW getStaticF_Server();

  static inline ::System::TimeSpan getStaticF__preemptExpiryTime();

  static inline ::System::TimeSpan getStaticF__refreshAttemptPeriod();

  /// @brief Method get_CurrentRoleUri, addr 0x1fedcb4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Uri* get_CurrentRoleUri();

  /// @brief Method get_InfoUri, addr 0x1fedd5c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Uri* get_InfoUri();

  /// @brief Method get_Role, addr 0x1fecdf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Role();

  /// @brief Method get_RolesUri, addr 0x1fedc14, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Uri* get_RolesUri();

  static inline void setStaticF_AliasSeparators(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_InfoPath(::StringW value);

  static inline void setStaticF_RolesPath(::StringW value);

  static inline void setStaticF_Server(::StringW value);

  static inline void setStaticF__preemptExpiryTime(::System::TimeSpan value);

  static inline void setStaticF__refreshAttemptPeriod(::System::TimeSpan value);

  /// @brief Method set_Role, addr 0x1fecdf8, size 0x8, virtual false, abstract: false, final false
  inline void set_Role(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceProfileAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceProfileAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceProfileAWSCredentials(InstanceProfileAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceProfileAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceProfileAWSCredentials(InstanceProfileAWSCredentials const&) = delete;

  /// @brief Field _currentRefreshState, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* ____currentRefreshState;

  /// @brief Field _proxy, offset: 0x40, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____proxy;

  /// @brief Field <Role>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____Role_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::InstanceProfileAWSCredentials, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::InstanceProfileAWSCredentials, ____currentRefreshState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::InstanceProfileAWSCredentials, ____proxy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::InstanceProfileAWSCredentials, ____Role_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::InstanceProfileAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::InstanceProfileAWSCredentials*, "Amazon.Runtime", "InstanceProfileAWSCredentials");
NEED_NO_BOX(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__InstanceProfileAWSCredentials___GetAvailableRoles_d__14*, "Amazon.Runtime", "InstanceProfileAWSCredentials/<GetAvailableRoles>d__14");
