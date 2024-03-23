#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(DefaultInstanceProfileAWSCredentials)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System::Threading {
class Timer;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class DefaultInstanceProfileAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials);
// Type: Amazon.Runtime::DefaultInstanceProfileAWSCredentials
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::DefaultInstanceProfileAWSCredentials*
class CORDL_TYPE DefaultInstanceProfileAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* _instance;

  /// @brief Field credentialsLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_credentialsLock, put = __cordl_internal_set_credentialsLock))::System::Threading::ReaderWriterLockSlim* credentialsLock;

  /// @brief Field credentialsLockTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credentialsLockTimeout, put = setStaticF_credentialsLockTimeout))::System::TimeSpan credentialsLockTimeout;

  /// @brief Field credentialsRetrieverTimer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_credentialsRetrieverTimer, put = __cordl_internal_set_credentialsRetrieverTimer))::System::Threading::Timer* credentialsRetrieverTimer;

  /// @brief Field instanceLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instanceLock, put = setStaticF_instanceLock))::System::Object* instanceLock;

  /// @brief Field isDisposed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isDisposed, put = __cordl_internal_set_isDisposed)) bool isDisposed;

  /// @brief Field lastRetrievedCredentials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastRetrievedCredentials, put = __cordl_internal_set_lastRetrievedCredentials))::Amazon::Runtime::ImmutableCredentials* lastRetrievedCredentials;

  /// @brief Field logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger))::Amazon::Runtime::Internal::Util::Logger* logger;

  /// @brief Field neverTimespan, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_neverTimespan, put = setStaticF_neverTimespan))::System::TimeSpan neverTimespan;

  /// @brief Field refreshRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_refreshRate, put = setStaticF_refreshRate))::System::TimeSpan refreshRate;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CheckIsIMDSEnabled, addr 0x1fe7e60, size 0xa0, virtual false, abstract: false, final false
  static inline void CheckIsIMDSEnabled();

  /// @brief Method Dispose, addr 0x1fe8dc4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1fe8c68, size 0x15c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FetchCredentials, addr 0x1fe83d8, size 0x520, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::ImmutableCredentials* FetchCredentials();

  /// @brief Method GetCredentials, addr 0x1fe8114, size 0x2c4, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  /// @brief Method GetCredentialsAsync, addr 0x1fe88f8, size 0x84, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* GetCredentialsAsync();

  static inline ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* New_ctor();

  /// @brief Method RenewCredentials, addr 0x1fe897c, size 0x2ec, virtual false, abstract: false, final false
  inline void RenewCredentials(::System::Object* unused);

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get_credentialsLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get_credentialsLock() const;

  constexpr ::System::Threading::Timer*& __cordl_internal_get_credentialsRetrieverTimer();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& __cordl_internal_get_credentialsRetrieverTimer() const;

  constexpr bool const& __cordl_internal_get_isDisposed() const;

  constexpr bool& __cordl_internal_get_isDisposed();

  constexpr ::Amazon::Runtime::ImmutableCredentials*& __cordl_internal_get_lastRetrievedCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& __cordl_internal_get_lastRetrievedCredentials() const;

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get_logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get_logger() const;

  constexpr void __cordl_internal_set_credentialsLock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set_credentialsRetrieverTimer(::System::Threading::Timer* value);

  constexpr void __cordl_internal_set_isDisposed(bool value);

  constexpr void __cordl_internal_set_lastRetrievedCredentials(::Amazon::Runtime::ImmutableCredentials* value);

  constexpr void __cordl_internal_set_logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x1fe7f00, size 0x214, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* getStaticF__instance();

  static inline ::System::TimeSpan getStaticF_credentialsLockTimeout();

  static inline ::System::Object* getStaticF_instanceLock();

  static inline ::System::TimeSpan getStaticF_neverTimespan();

  static inline ::System::TimeSpan getStaticF_refreshRate();

  /// @brief Method get_Instance, addr 0x1fe7cd0, size 0x190, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* get_Instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__instance(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* value);

  static inline void setStaticF_credentialsLockTimeout(::System::TimeSpan value);

  static inline void setStaticF_instanceLock(::System::Object* value);

  static inline void setStaticF_neverTimespan(::System::TimeSpan value);

  static inline void setStaticF_refreshRate(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultInstanceProfileAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultInstanceProfileAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultInstanceProfileAWSCredentials(DefaultInstanceProfileAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultInstanceProfileAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultInstanceProfileAWSCredentials(DefaultInstanceProfileAWSCredentials const&) = delete;

  /// @brief Field credentialsLock, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ___credentialsLock;

  /// @brief Field credentialsRetrieverTimer, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Timer* ___credentialsRetrieverTimer;

  /// @brief Field lastRetrievedCredentials, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::ImmutableCredentials* ___lastRetrievedCredentials;

  /// @brief Field logger, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ___logger;

  /// @brief Field isDisposed, offset: 0x30, size: 0x1, def value: None
  bool ___isDisposed;

  /// @brief Field FailedToGetCredentialsMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString FailedToGetCredentialsMessage{ u"Failed to retrieve credentials from EC2 Instance Metadata Service." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials, ___credentialsLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials, ___credentialsRetrieverTimer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials, ___lastRetrievedCredentials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials, ___logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials, ___isDisposed) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*, "Amazon.Runtime", "DefaultInstanceProfileAWSCredentials");
