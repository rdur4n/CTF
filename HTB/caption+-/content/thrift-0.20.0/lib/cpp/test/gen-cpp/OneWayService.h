/**
 * Autogenerated by Thrift Compiler (0.20.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef OneWayService_H
#define OneWayService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "OneWayTest_types.h"

namespace onewaytest {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class OneWayServiceIf {
 public:
  virtual ~OneWayServiceIf() {}
  virtual void roundTripRPC() = 0;
  virtual void oneWayRPC() = 0;
};

class OneWayServiceIfFactory {
 public:
  typedef OneWayServiceIf Handler;

  virtual ~OneWayServiceIfFactory() {}

  virtual OneWayServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(OneWayServiceIf* /* handler */) = 0;
  };

class OneWayServiceIfSingletonFactory : virtual public OneWayServiceIfFactory {
 public:
  OneWayServiceIfSingletonFactory(const ::std::shared_ptr<OneWayServiceIf>& iface) : iface_(iface) {}
  virtual ~OneWayServiceIfSingletonFactory() {}

  virtual OneWayServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) override {
    return iface_.get();
  }
  virtual void releaseHandler(OneWayServiceIf* /* handler */) override {}

 protected:
  ::std::shared_ptr<OneWayServiceIf> iface_;
};

class OneWayServiceNull : virtual public OneWayServiceIf {
 public:
  virtual ~OneWayServiceNull() {}
  void roundTripRPC() override {
    return;
  }
  void oneWayRPC() override {
    return;
  }
};


class OneWayService_roundTripRPC_args {
 public:

  OneWayService_roundTripRPC_args(const OneWayService_roundTripRPC_args&) noexcept;
  OneWayService_roundTripRPC_args& operator=(const OneWayService_roundTripRPC_args&) noexcept;
  OneWayService_roundTripRPC_args() noexcept {
  }

  virtual ~OneWayService_roundTripRPC_args() noexcept;

  bool operator == (const OneWayService_roundTripRPC_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const OneWayService_roundTripRPC_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OneWayService_roundTripRPC_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class OneWayService_roundTripRPC_pargs {
 public:


  virtual ~OneWayService_roundTripRPC_pargs() noexcept;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class OneWayService_roundTripRPC_result {
 public:

  OneWayService_roundTripRPC_result(const OneWayService_roundTripRPC_result&) noexcept;
  OneWayService_roundTripRPC_result& operator=(const OneWayService_roundTripRPC_result&) noexcept;
  OneWayService_roundTripRPC_result() noexcept {
  }

  virtual ~OneWayService_roundTripRPC_result() noexcept;

  bool operator == (const OneWayService_roundTripRPC_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const OneWayService_roundTripRPC_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OneWayService_roundTripRPC_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class OneWayService_roundTripRPC_presult {
 public:


  virtual ~OneWayService_roundTripRPC_presult() noexcept;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class OneWayService_oneWayRPC_args {
 public:

  OneWayService_oneWayRPC_args(const OneWayService_oneWayRPC_args&) noexcept;
  OneWayService_oneWayRPC_args& operator=(const OneWayService_oneWayRPC_args&) noexcept;
  OneWayService_oneWayRPC_args() noexcept {
  }

  virtual ~OneWayService_oneWayRPC_args() noexcept;

  bool operator == (const OneWayService_oneWayRPC_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const OneWayService_oneWayRPC_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OneWayService_oneWayRPC_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class OneWayService_oneWayRPC_pargs {
 public:


  virtual ~OneWayService_oneWayRPC_pargs() noexcept;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class OneWayServiceClient : virtual public OneWayServiceIf {
 public:
  OneWayServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  OneWayServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void roundTripRPC() override;
  void send_roundTripRPC();
  void recv_roundTripRPC();
  void oneWayRPC() override;
  void send_oneWayRPC();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class OneWayServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<OneWayServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) override;
 private:
  typedef  void (OneWayServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_roundTripRPC(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_oneWayRPC(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  OneWayServiceProcessor(::std::shared_ptr<OneWayServiceIf> iface) :
    iface_(iface) {
    processMap_["roundTripRPC"] = &OneWayServiceProcessor::process_roundTripRPC;
    processMap_["oneWayRPC"] = &OneWayServiceProcessor::process_oneWayRPC;
  }

  virtual ~OneWayServiceProcessor() {}
};

class OneWayServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  OneWayServiceProcessorFactory(const ::std::shared_ptr< OneWayServiceIfFactory >& handlerFactory) noexcept :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) override;

 protected:
  ::std::shared_ptr< OneWayServiceIfFactory > handlerFactory_;
};

class OneWayServiceMultiface : virtual public OneWayServiceIf {
 public:
  OneWayServiceMultiface(std::vector<std::shared_ptr<OneWayServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~OneWayServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<OneWayServiceIf> > ifaces_;
  OneWayServiceMultiface() {}
  void add(::std::shared_ptr<OneWayServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void roundTripRPC() override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->roundTripRPC();
    }
    ifaces_[i]->roundTripRPC();
  }

  void oneWayRPC() override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->oneWayRPC();
    }
    ifaces_[i]->oneWayRPC();
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class OneWayServiceConcurrentClient : virtual public OneWayServiceIf {
 public:
  OneWayServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  OneWayServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void roundTripRPC() override;
  int32_t send_roundTripRPC();
  void recv_roundTripRPC(const int32_t seqid);
  void oneWayRPC() override;
  void send_oneWayRPC();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
